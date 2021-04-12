/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSArray;

@interface NEIKEv2TrafficSelectorPayload : NEIKEv2Payload {

	NSArray* _trafficSelectors;

}

@property (retain) NSArray * trafficSelectors;              //@synthesize trafficSelectors=_trafficSelectors - In the implementation block
+(id)copyTypeDescription;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setTrafficSelectors:(NSArray *)arg1 ;
-(NSArray *)trafficSelectors;
-(id)description;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
@end

