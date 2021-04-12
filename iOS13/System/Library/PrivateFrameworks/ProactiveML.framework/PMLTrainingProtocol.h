/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@protocol PMLTrainingProtocol <NSObject>
@required
-(void)deleteSessionsWithBundleID:(id)arg1;
-(void)deleteSessionsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)deleteSessionsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
-(id)planReceivedWithPayload:(id)arg1 error:(id*)arg2;
-(void)setSourceRecoverer:(/*^block*/id)arg1;
-(void)trimDb;
-(void)addSessionWithCovariates:(id)arg1 source:(id)arg2 label:(long long)arg3 sessionDescriptor:(id)arg4 spotlightReference:(id)arg5 isInternal:(BOOL)arg6;
-(id)lastTrainingFeaturizationForModelName:(id)arg1 andLocale:(id)arg2;
-(void)updateSessionsAndLabelForModel:(id)arg1 block:(/*^block*/id)arg2;
-(void)updateLastTrainingFeaturizationForModel:(id)arg1 andData:(id)arg2;
-(void)addSessionWithCovariates:(id)arg1 label:(long long)arg2 sessionDescriptor:(id)arg3 spotlightReference:(id)arg4 isInternal:(BOOL)arg5;

@end

