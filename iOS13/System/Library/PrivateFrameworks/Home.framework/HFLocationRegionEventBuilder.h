/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFEventBuilder.h>
#import <libobjc.A.dylib/HFLocationEventBuilder.h>

@class CLCircularRegion, NSString;

@interface HFLocationRegionEventBuilder : HFEventBuilder <HFLocationEventBuilder> {

	CLCircularRegion* _region;

}

@property (nonatomic,copy) CLCircularRegion * region;                     //@synthesize region=_region - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long eventType; 
-(NSString *)description;
-(CLCircularRegion *)region;
-(id)initWithEvent:(id)arg1 ;
-(unsigned long long)eventType;
-(void)setRegion:(CLCircularRegion *)arg1 ;
-(id)buildNewEventFromCurrentState;
-(BOOL)isRegionAtHome:(id)arg1 ;
@end

