/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/


@class NSMutableDictionary, TUIKBGraphSerialization;

@interface TUIKeyboardLayoutFactory : NSObject {

	void* _layoutsLibraryHandle;
	NSMutableDictionary* _internalCache;
	TUIKBGraphSerialization* _decoder;

}

@property (nonatomic,readonly) void* layoutsLibraryHandle;              //@synthesize layoutsLibraryHandle=_layoutsLibraryHandle - In the implementation block
@property (retain) NSMutableDictionary * internalCache;                 //@synthesize internalCache=_internalCache - In the implementation block
@property (retain) TUIKBGraphSerialization * decoder;                   //@synthesize decoder=_decoder - In the implementation block
+(id)sharedKeyboardFactory;
+(id)layoutsFileName;
-(id)init;
-(void)dealloc;
-(id)keyboardPrefixForWidth:(double)arg1 andEdge:(BOOL)arg2 ;
-(id)keyboardWithName:(id)arg1 inCache:(id)arg2 ;
-(TUIKBGraphSerialization *)decoder;
-(void*)layoutsLibraryHandle;
-(NSMutableDictionary *)internalCache;
-(void)setInternalCache:(NSMutableDictionary *)arg1 ;
-(void)setDecoder:(TUIKBGraphSerialization *)arg1 ;
-(void)_createDecoderIfNecessary;
@end

