/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class NSMutableDictionary;

@interface TIKeyboardLayoutFactory : NSObject {

	void* _layoutsLibraryHandle;
	NSMutableDictionary* _internalCache;

}

@property (nonatomic,readonly) void* layoutsLibraryHandle;              //@synthesize layoutsLibraryHandle=_layoutsLibraryHandle - In the implementation block
@property (retain) NSMutableDictionary * internalCache;                 //@synthesize internalCache=_internalCache - In the implementation block
+(id)layoutsFileName;
+(id)sharedKeyboardFactory;
-(NSMutableDictionary *)internalCache;
-(id)init;
-(void)setInternalCache:(NSMutableDictionary *)arg1 ;
-(void*)layoutsLibraryHandle;
-(id)keyboardPrefixForWidth:(double)arg1 andEdge:(BOOL)arg2 ;
-(id)keyboardWithName:(id)arg1 inCache:(id)arg2 ;
@end

