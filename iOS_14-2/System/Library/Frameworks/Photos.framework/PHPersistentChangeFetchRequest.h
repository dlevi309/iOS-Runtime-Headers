/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class PHPersistentChangeToken;

@interface PHPersistentChangeFetchRequest : NSObject {

	PHPersistentChangeToken* _token;
	unsigned long long _maximumChangeThreshold;

}

@property (nonatomic,copy) PHPersistentChangeToken * token;                          //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) unsigned long long maximumChangeThreshold;              //@synthesize maximumChangeThreshold=_maximumChangeThreshold - In the implementation block
-(void)setToken:(PHPersistentChangeToken *)arg1 ;
-(unsigned long long)maximumChangeThreshold;
-(PHPersistentChangeToken *)token;
-(void)setMaximumChangeThreshold:(unsigned long long)arg1 ;
@end

