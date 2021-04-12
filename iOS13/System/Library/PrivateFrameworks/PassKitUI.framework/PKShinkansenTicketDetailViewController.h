/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKTransitTicketDetailViewController.h>
#import <libobjc.A.dylib/PKTransitTicketDetailDataSource.h>

@class NSMutableArray, PKFelicaPassProperties, NSString;

@interface PKShinkansenTicketDetailViewController : PKTransitTicketDetailViewController <PKTransitTicketDetailDataSource> {

	NSMutableArray* _train1Titles;
	NSMutableArray* _train2Titles;
	NSMutableArray* _train1Values;
	NSMutableArray* _train2Values;
	PKFelicaPassProperties* _properties;

}

@property (nonatomic,readonly) PKFelicaPassProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKFelicaPassProperties *)properties;
-(unsigned long long)numberOfLegs;
-(id)titleForLeg:(unsigned long long)arg1 ;
-(long long)transitTicketDetailNumberOfRowsForLeg:(unsigned long long)arg1 ;
-(id)transitTicketDetailTitleForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2 ;
-(id)transitTicketDetailValueForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2 ;
-(id)initWithFelicaProperty:(id)arg1 ;
-(void)_prepareLabelsAndValues;
-(id)_transitTicketTitleForDetail:(unsigned long long)arg1 ;
-(id)_transitTicketValueForDetail:(unsigned long long)arg1 forSecondaryTrain:(BOOL)arg2 ;
@end

