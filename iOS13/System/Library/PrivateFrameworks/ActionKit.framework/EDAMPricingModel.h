/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMPricingModel : FATObject {

	NSNumber* _gnomeActive;
	NSNumber* _gnomeWarmingPeriod;
	NSNumber* _pricingModelStart;

}

@property (nonatomic,retain) NSNumber * gnomeActive;                     //@synthesize gnomeActive=_gnomeActive - In the implementation block
@property (nonatomic,retain) NSNumber * gnomeWarmingPeriod;              //@synthesize gnomeWarmingPeriod=_gnomeWarmingPeriod - In the implementation block
@property (nonatomic,retain) NSNumber * pricingModelStart;               //@synthesize pricingModelStart=_pricingModelStart - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)gnomeActive;
-(void)setGnomeActive:(NSNumber *)arg1 ;
-(NSNumber *)gnomeWarmingPeriod;
-(void)setGnomeWarmingPeriod:(NSNumber *)arg1 ;
-(NSNumber *)pricingModelStart;
-(void)setPricingModelStart:(NSNumber *)arg1 ;
@end

