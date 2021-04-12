/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/FUFlightViewControllerDelegate.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class FUFlightViewController, SFFlightCardSection, NUIContainerBoxView, NSString;

@interface SearchUIFlightCardSectionView : SearchUICardSectionView <FUFlightViewControllerDelegate, NUIContainerViewDelegate> {

	FUFlightViewController* _flightViewController;
	unsigned long long _lastSelectedLegIndex;

}

@property (nonatomic,retain) SFFlightCardSection * section; 
@property (nonatomic,retain) FUFlightViewController * flightViewController;              //@synthesize flightViewController=_flightViewController - In the implementation block
@property (assign,nonatomic) unsigned long long lastSelectedLegIndex;                    //@synthesize lastSelectedLegIndex=_lastSelectedLegIndex - In the implementation block
@property (nonatomic,retain) NUIContainerBoxView * contentView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)setupContentView;
-(void)flightController:(id)arg1 didSelectLeg:(long long)arg2 ofFlight:(long long)arg3 ;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(void)setLastSelectedLegIndex:(unsigned long long)arg1 ;
-(void)setFlightViewController:(FUFlightViewController *)arg1 ;
-(FUFlightViewController *)flightViewController;
-(void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2 ;
-(unsigned long long)lastSelectedLegIndex;
@end

