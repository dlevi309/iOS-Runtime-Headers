/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSData;

@interface WBSPasswordBreachBloomFilter : NSObject {

	unsigned _capacity;
	unsigned _errorDenominator;
	unsigned _hashCount;
	unsigned _bucketCount;
	NSData* _bucketData;

}

@property (nonatomic,readonly) NSData * serializedRepresentation; 
-(NSData *)serializedRepresentation;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(BOOL)containsLowercaseHexStringForData:(id)arg1 ;
-(id)initWithCapacity:(unsigned)arg1 errorDenominator:(unsigned)arg2 bucketData:(id)arg3 ;
-(void)_setBucketAtIndex:(unsigned)arg1 inBuffer:(char*)arg2 ;
-(void)_enumerateBucketIndexesForData:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)_getBucketAtIndex:(unsigned)arg1 ;
-(BOOL)containsData:(id)arg1 ;
-(id)description;
-(void)addData:(id)arg1 ;
@end

