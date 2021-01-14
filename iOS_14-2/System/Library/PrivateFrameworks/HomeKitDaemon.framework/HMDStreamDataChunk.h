/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSData;

@interface HMDStreamDataChunk : HMFObject {

	BOOL _isLast;
	NSNumber* _sequenceNumber;
	NSData* _data;

}

@property (copy,readonly) NSNumber * sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (readonly) BOOL isLast;                                 //@synthesize isLast=_isLast - In the implementation block
@property (copy,readonly) NSData * data;                          //@synthesize data=_data - In the implementation block
-(BOOL)isLast;
-(NSNumber *)sequenceNumber;
-(NSData *)data;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithStreamDataDictionary:(id)arg1 ;
-(id)initWithSequenceNumber:(id)arg1 data:(id)arg2 isLast:(BOOL)arg3 ;
@end

