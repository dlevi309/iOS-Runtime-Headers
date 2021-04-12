/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
*/


@protocol OSAConcreteReport <NSObject>
@optional
-(BOOL)isActionable;
-(id)additionalIPSMetadata;

@required
-(id)problemType;
-(id)appleCareDetails;
-(id)reportNamePrefix;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2;

@end

