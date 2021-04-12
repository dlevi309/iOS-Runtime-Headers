/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PTTestRecipeInfo *)info;
-(void)_deactivate;
-(void)_activate;
-(BOOL)_wantsEvent:(long long)arg1 ;
-(void)setInfo:(PTTestRecipeInfo *)arg1 ;
-(void)_handleEvent:(long long)arg1 ;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(id)prepareBlock;
-(NSString *)title;
-(void)setPrepareBlock:(id)arg1 ;
-(id)_initWithTitle:(id)arg1 prepareBlock:(/*^block*/id)arg2 cleanupBlock:(/*^block*/id)arg3 ;
-(id)cleanupBlock;
-(void)setCleanupBlock:(id)arg1 ;
@end

