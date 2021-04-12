/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

