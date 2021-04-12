/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString, NSArray;

@interface AMSDataMigratorOptions : NSObject {

	NSString* _currentBuildVersion;
	NSString* _previousBuildVersion;
	unsigned long long _scenario;

}

@property (nonatomic,copy) NSString * currentBuildVersion;               //@synthesize currentBuildVersion=_currentBuildVersion - In the implementation block
@property (nonatomic,readonly) NSArray * optionsArray; 
@property (nonatomic,copy) NSString * previousBuildVersion;              //@synthesize previousBuildVersion=_previousBuildVersion - In the implementation block
@property (assign,nonatomic) unsigned long long scenario;                //@synthesize scenario=_scenario - In the implementation block
+(id)_stringFromOptionsArray:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)scenario;
-(NSString *)previousBuildVersion;
-(void)setCurrentBuildVersion:(NSString *)arg1 ;
-(void)setScenario:(unsigned long long)arg1 ;
-(id)initWithOptionsArray:(id)arg1 ;
-(NSArray *)optionsArray;
-(void)setPreviousBuildVersion:(NSString *)arg1 ;
-(NSString *)currentBuildVersion;
@end

