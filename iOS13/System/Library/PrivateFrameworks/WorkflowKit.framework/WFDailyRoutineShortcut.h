/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSString, WFImage, WFDailyRoutineShortcutSetupFlow;

@interface WFDailyRoutineShortcut : NSObject {

	NSString* _title;
	NSString* _subtitle;
	WFImage* _bannerImage;
	WFDailyRoutineShortcutSetupFlow* _setupFlow;

}

@property (nonatomic,copy,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) WFImage * bannerImage;                               //@synthesize bannerImage=_bannerImage - In the implementation block
@property (nonatomic,readonly) WFDailyRoutineShortcutSetupFlow * setupFlow;              //@synthesize setupFlow=_setupFlow - In the implementation block
-(NSString *)title;
-(NSString *)subtitle;
-(WFDailyRoutineShortcutSetupFlow *)setupFlow;
-(WFImage *)bannerImage;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 bannerImage:(id)arg3 setupFlow:(id)arg4 ;
@end

