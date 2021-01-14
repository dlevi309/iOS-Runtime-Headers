/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSArray;

@interface NEIKEv2DeletePayload : NEIKEv2Payload {

	unsigned long long _protocol;
	NSArray* _spis;

}

@property (assign) unsigned long long protocol;              //@synthesize protocol=_protocol - In the implementation block
@property (retain) NSArray * spis;                           //@synthesize spis=_spis - In the implementation block
+(id)copyTypeDescription;
-(void)setProtocol:(unsigned long long)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)spis;
-(unsigned long long)protocol;
-(void)setSpis:(NSArray *)arg1 ;
-(id)description;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(unsigned long long)type;
@end

