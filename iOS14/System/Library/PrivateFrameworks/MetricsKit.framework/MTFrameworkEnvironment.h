/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class NSString;

@interface MTFrameworkEnvironment : NSObject {

	NSString* _localDataPath;

}

@property (nonatomic,copy) NSString * localDataPath; 
+(void)initialize;
+(id)sharedEnvironment;
+(void)setSharedEnvironment:(id)arg1 ;
+(void)withEnvironment:(id)arg1 execute:(/*^block*/id)arg2 ;
-(BOOL)isInternalBuild;
-(id)date;
-(id)valueForEntitlement:(id)arg1 ;
-(id)secretStore;
-(void)setLocalDataPath:(NSString *)arg1 ;
-(NSString *)localDataPath;
-(BOOL)useCloudKitSandbox;
@end

