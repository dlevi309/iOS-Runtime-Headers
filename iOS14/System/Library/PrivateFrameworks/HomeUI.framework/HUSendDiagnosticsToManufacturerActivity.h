/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <ShareSheet/UIActivity.h>

@class HFAccessoryDiagnosticItem;

@interface HUSendDiagnosticsToManufacturerActivity : UIActivity {

	HFAccessoryDiagnosticItem* _diagnosticItem;

}

@property (nonatomic,retain) HFAccessoryDiagnosticItem * diagnosticItem;              //@synthesize diagnosticItem=_diagnosticItem - In the implementation block
-(id)activityType;
-(void)prepareWithActivityItems:(id)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)activityImage;
-(id)activityViewController;
-(HFAccessoryDiagnosticItem *)diagnosticItem;
-(id)initWithDiagnosticItem:(id)arg1 ;
-(void)setDiagnosticItem:(HFAccessoryDiagnosticItem *)arg1 ;
@end

