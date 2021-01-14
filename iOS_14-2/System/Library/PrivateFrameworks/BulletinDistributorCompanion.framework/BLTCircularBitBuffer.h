/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class NSMutableData;

@interface BLTCircularBitBuffer : NSObject {

	NSMutableData* _bitVector;
	unsigned long long _beginIndex;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) unsigned long long beginIndex;              //@synthesize beginIndex=_beginIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long capacity;                //@synthesize capacity=_capacity - In the implementation block
+(unsigned long long)actualCapacity:(unsigned long long)arg1 ;
-(void)clear;
-(unsigned long long)capacity;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)beginIndex;
-(void)_setBit:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithData:(id)arg1 andIndex:(unsigned long long)arg2 ;
-(void)setBit:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned char)bitAtIndex:(unsigned long long)arg1 ;
-(id)bitVector;
@end

