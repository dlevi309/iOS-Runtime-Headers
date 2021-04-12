/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>

@class HMDStreamDataSequenceNumber, NSData, NSString;

@interface HMDStreamData : HMFObject {

	HMDStreamDataSequenceNumber* _sequenceNumber;
	NSData* _data;
	NSString* _type;

}

@property (copy,readonly) HMDStreamDataSequenceNumber * sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (copy,readonly) NSData * data;                                             //@synthesize data=_data - In the implementation block
@property (copy,readonly) NSString * type;                                           //@synthesize type=_type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(NSData *)data;
-(HMDStreamDataSequenceNumber *)sequenceNumber;
-(id)attributeDescriptions;
-(id)initWithSequenceNumber:(id)arg1 data:(id)arg2 type:(id)arg3 ;
@end

