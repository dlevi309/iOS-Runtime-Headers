/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <ShareSheet/UIActivity.h>

@class NSString;

@interface PUEditActionActivity : UIActivity {

	NSString* _actionName;
	NSString* _systemImageName;
	/*^block*/id _performActivityActionHandler;
	/*^block*/id _canPerformActivityActionHandler;
	NSString* _internalActivityType;
	/*^block*/id _activityBlock;

}

@property (nonatomic,retain) NSString * internalActivityType;               //@synthesize internalActivityType=_internalActivityType - In the implementation block
@property (nonatomic,copy) id activityBlock;                                //@synthesize activityBlock=_activityBlock - In the implementation block
@property (nonatomic,copy) NSString * actionName;                           //@synthesize actionName=_actionName - In the implementation block
@property (nonatomic,copy) NSString * systemImageName;                      //@synthesize systemImageName=_systemImageName - In the implementation block
@property (nonatomic,copy) id performActivityActionHandler;                 //@synthesize performActivityActionHandler=_performActivityActionHandler - In the implementation block
@property (nonatomic,copy) id canPerformActivityActionHandler;              //@synthesize canPerformActivityActionHandler=_canPerformActivityActionHandler - In the implementation block
+(long long)activityCategory;
-(NSString *)actionName;
-(id)activityType;
-(void)performActivity;
-(id)activityBlock;
-(id)initWithActionName:(id)arg1 activityType:(id)arg2 systemImageName:(id)arg3 ;
-(void)setSystemImageName:(NSString *)arg1 ;
-(id)performActivityActionHandler;
-(void)setPerformActivityActionHandler:(id)arg1 ;
-(id)canPerformActivityActionHandler;
-(void)setCanPerformActivityActionHandler:(id)arg1 ;
-(NSString *)internalActivityType;
-(void)setInternalActivityType:(NSString *)arg1 ;
-(id)_systemImageName;
-(void)setActivityBlock:(id)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(NSString *)systemImageName;
-(void)setActionName:(NSString *)arg1 ;
@end

