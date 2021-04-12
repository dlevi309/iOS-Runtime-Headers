/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UIView.h>

@class UILabel;

@interface STNoUsageDataView : UIView {

	BOOL _localDevice;
	UILabel* _noDataDetailTextLabel;

}

@property (nonatomic,readonly) UILabel * noDataDetailTextLabel;                  //@synthesize noDataDetailTextLabel=_noDataDetailTextLabel - In the implementation block
@property (assign,getter=isLocalDevice,nonatomic) BOOL localDevice;              //@synthesize localDevice=_localDevice - In the implementation block
-(void)setLocalDevice:(BOOL)arg1 ;
-(BOOL)isLocalDevice;
-(UILabel *)noDataDetailTextLabel;
-(id)initWithPreferredFontTextStyle:(id)arg1 ;
@end

