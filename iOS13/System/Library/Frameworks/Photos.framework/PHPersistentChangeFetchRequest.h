/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class PHPersistentChangeToken;

@interface PHPersistentChangeFetchRequest : NSObject {

	PHPersistentChangeToken* _token;
	unsigned long long _maximumChangeThreshold;

}

@property (nonatomic,copy) PHPersistentChangeToken * token;                          //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) unsigned long long maximumChangeThreshold;              //@synthesize maximumChangeThreshold=_maximumChangeThreshold - In the implementation block
-(PHPersistentChangeToken *)token;
-(void)setToken:(PHPersistentChangeToken *)arg1 ;
-(unsigned long long)maximumChangeThreshold;
-(void)setMaximumChangeThreshold:(unsigned long long)arg1 ;
@end

