/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/


@class NSString, PTTestRecipeInfo;

@interface PTTestRecipe : NSObject {

	NSString* _title;
	/*^block*/id _prepareBlock;
	/*^block*/id _cleanupBlock;
	PTTestRecipeInfo* _info;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,retain) PTTestRecipeInfo * info;              //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                 //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id prepareBlock;                        //@synthesize prepareBlock=_prepareBlock - In the implementation block
@property (nonatomic,copy) id cleanupBlock;                        //@synthesize cleanupBlock=_cleanupBlock - In the implementation block
-(void)_activate;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)title;
-(id)cleanupBlock;
-(void)setCleanupBlock:(id)arg1 ;
-(id)invalidationHandler;
-(PTTestRecipeInfo *)info;
-(void)_deactivate;
-(void)setInfo:(PTTestRecipeInfo *)arg1 ;
-(void)setPrepareBlock:(id)arg1 ;
-(id)prepareBlock;
-(void)_handleEvent:(long long)arg1 ;
-(BOOL)_wantsEvent:(long long)arg1 ;
-(id)_initWithTitle:(id)arg1 prepareBlock:(/*^block*/id)arg2 cleanupBlock:(/*^block*/id)arg3 ;
@end

