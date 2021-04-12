/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSArray;

@interface NEIKEv2TrafficSelectorPayload : NEIKEv2Payload {

	NSArray* _trafficSelectors;

}

@property (retain) NSArray * trafficSelectors;              //@synthesize trafficSelectors=_trafficSelectors - In the implementation block
+(id)copyTypeDescription;
-(id)description;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setTrafficSelectors:(NSArray *)arg1 ;
-(NSArray *)trafficSelectors;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
@end

