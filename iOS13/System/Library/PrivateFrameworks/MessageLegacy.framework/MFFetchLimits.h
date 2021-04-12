/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@interface MFFetchLimits : NSObject {

	unsigned long long _fetchMinBytes;
	unsigned long long _fetchMaxBytes;
	unsigned long long _minBytesLeft;

}

@property (assign,nonatomic) unsigned long long fetchMinBytes;              //@synthesize fetchMinBytes=_fetchMinBytes - In the implementation block
@property (assign,nonatomic) unsigned long long fetchMaxBytes;              //@synthesize fetchMaxBytes=_fetchMaxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long minBytesLeft;               //@synthesize minBytesLeft=_minBytesLeft - In the implementation block
-(id)init;
-(id)description;
-(void)setFetchMaxBytes:(unsigned long long)arg1 ;
-(unsigned long long)fetchMaxBytes;
-(unsigned long long)fetchMinBytes;
-(void)setFetchMinBytes:(unsigned long long)arg1 ;
-(unsigned long long)minBytesLeft;
-(void)setMinBytesLeft:(unsigned long long)arg1 ;
@end

