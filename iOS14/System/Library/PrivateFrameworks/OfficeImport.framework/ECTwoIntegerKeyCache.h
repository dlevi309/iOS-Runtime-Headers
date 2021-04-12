/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OITSUIntegerKeyDictionary;

@interface ECTwoIntegerKeyCache : NSObject {

	OITSUIntegerKeyDictionary* mCache;
	BOOL _assertForCollisions;

}

@property (assign,nonatomic) BOOL assertForCollisions;              //@synthesize assertForCollisions=_assertForCollisions - In the implementation block
-(id)init;
-(void)setObject:(id)arg1 forKey1:(long long)arg2 key2:(long long)arg3 ;
-(BOOL)assertForCollisions;
-(void)setAssertForCollisions:(BOOL)arg1 ;
-(id)objectForKey1:(long long)arg1 key2:(long long)arg2 ;
@end

