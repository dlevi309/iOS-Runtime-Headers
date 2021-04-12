/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSString, WFImage, NSArray, WFDailyRoutineShortcutSetupFlow;

@interface WFDailyRoutineShortcut : NSObject {

	NSString* _title;
	NSString* _subtitle;
	WFImage* _bannerImage;
	NSArray* _actionIcons;
	WFDailyRoutineShortcutSetupFlow* _setupFlow;

}

@property (nonatomic,copy,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) WFImage * bannerImage;                               //@synthesize bannerImage=_bannerImage - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actionIcons;                               //@synthesize actionIcons=_actionIcons - In the implementation block
@property (nonatomic,readonly) WFDailyRoutineShortcutSetupFlow * setupFlow;              //@synthesize setupFlow=_setupFlow - In the implementation block
-(NSString *)subtitle;
-(WFImage *)bannerImage;
-(WFDailyRoutineShortcutSetupFlow *)setupFlow;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 bannerImage:(id)arg3 actionIcons:(id)arg4 setupFlow:(id)arg5 ;
-(NSArray *)actionIcons;
@end

