/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isLocalDevice;
-(void)setLocalDevice:(BOOL)arg1 ;
-(UILabel *)noDataDetailTextLabel;
-(id)initWithPreferredFontTextStyle:(id)arg1 ;
@end

