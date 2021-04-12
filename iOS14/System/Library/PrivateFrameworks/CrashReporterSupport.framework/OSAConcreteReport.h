/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport
*/


@protocol OSAConcreteReport <NSObject>
@optional
-(id)additionalIPSMetadata;
-(BOOL)isActionable;

@required
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2;
-(id)appleCareDetails;
-(id)problemType;
-(id)reportNamePrefix;

@end

