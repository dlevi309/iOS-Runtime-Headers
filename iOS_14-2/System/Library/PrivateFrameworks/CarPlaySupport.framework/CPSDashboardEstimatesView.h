/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CPSNavigationDisplaying.h>

@class UILabel, UIStackView, CPSTravelEstimatesStringFormatter, NSString;

@interface CPSDashboardEstimatesView : UIView <CPSNavigationDisplaying> {

	UILabel* _etaLabel;
	UILabel* _timeRemainingLabel;
	UILabel* _distanceRemainingLabel;
	UIStackView* _stackView;
	CPSTravelEstimatesStringFormatter* _travelEstimatesStringFormatter;

}

@property (nonatomic,retain) UILabel * etaLabel;                                                              //@synthesize etaLabel=_etaLabel - In the implementation block
@property (nonatomic,retain) UILabel * timeRemainingLabel;                                                    //@synthesize timeRemainingLabel=_timeRemainingLabel - In the implementation block
@property (nonatomic,retain) UILabel * distanceRemainingLabel;                                                //@synthesize distanceRemainingLabel=_distanceRemainingLabel - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                                         //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) CPSTravelEstimatesStringFormatter * travelEstimatesStringFormatter;              //@synthesize travelEstimatesStringFormatter=_travelEstimatesStringFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(UIStackView *)stackView;
-(UILabel *)timeRemainingLabel;
-(void)setTimeRemainingLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(UILabel *)etaLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_labelFont;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)updateTripEstimates:(id)arg1 ;
-(CPSTravelEstimatesStringFormatter *)travelEstimatesStringFormatter;
-(UILabel *)distanceRemainingLabel;
-(void)setEtaLabel:(UILabel *)arg1 ;
-(void)setDistanceRemainingLabel:(UILabel *)arg1 ;
-(void)setTravelEstimatesStringFormatter:(CPSTravelEstimatesStringFormatter *)arg1 ;
@end

