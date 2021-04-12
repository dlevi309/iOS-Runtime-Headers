/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(unsigned long long)type;
-(unsigned long long)protocol;
-(void)setProtocol:(unsigned long long)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setSpis:(NSArray *)arg1 ;
-(NSArray *)spis;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
@end

