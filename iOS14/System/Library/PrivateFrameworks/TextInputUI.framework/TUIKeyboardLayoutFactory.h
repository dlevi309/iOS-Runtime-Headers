/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)layoutsFileName;
+(id)sharedKeyboardFactory;
-(NSMutableDictionary *)internalCache;
-(id)init;
-(void)setDecoder:(TUIKBGraphSerialization *)arg1 ;
-(void)setInternalCache:(NSMutableDictionary *)arg1 ;
-(void*)layoutsLibraryHandle;
-(id)keyboardPrefixForWidth:(double)arg1 andEdge:(BOOL)arg2 ;
-(TUIKBGraphSerialization *)decoder;
-(id)keyboardWithName:(id)arg1 inCache:(id)arg2 ;
-(void)_createDecoderIfNecessary;
-(void)dealloc;
@end

