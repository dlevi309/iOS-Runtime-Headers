/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_prepareLabelsAndValues;
-(id)_transitTicketTitleForDetail:(unsigned long long)arg1 ;
-(id)_transitTicketValueForDetail:(unsigned long long)arg1 forSecondaryTrain:(BOOL)arg2 ;
-(unsigned long long)numberOfLegs;
-(id)titleForLeg:(unsigned long long)arg1 ;
-(long long)transitTicketDetailNumberOfRowsForLeg:(unsigned long long)arg1 ;
-(id)transitTicketDetailTitleForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2 ;
-(id)transitTicketDetailValueForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2 ;
-(id)initWithFelicaProperty:(id)arg1 ;
@end

