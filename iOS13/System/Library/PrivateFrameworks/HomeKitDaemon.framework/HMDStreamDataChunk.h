/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)data;
-(NSNumber *)sequenceNumber;
-(BOOL)isLast;
-(id)attributeDescriptions;
-(id)initWithStreamDataDictionary:(id)arg1 ;
-(id)initWithSequenceNumber:(id)arg1 data:(id)arg2 isLast:(BOOL)arg3 ;
@end

