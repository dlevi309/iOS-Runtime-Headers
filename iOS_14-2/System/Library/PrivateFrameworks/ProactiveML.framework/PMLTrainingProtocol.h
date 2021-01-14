/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@protocol PMLTrainingProtocol <NSObject>
@required
-(void)addSessionWithCovariates:(id)arg1 source:(id)arg2 label:(long long)arg3 sessionDescriptor:(id)arg4 spotlightReference:(id)arg5 isInternal:(BOOL)arg6;
-(void)deleteSessionsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)updateLastTrainingFeaturizationForModel:(id)arg1 andData:(id)arg2;
-(id)planReceivedWithRecipe:(id)arg1 attachments:(id)arg2 error:(id*)arg3;
-(void)updateSessionsAndLabelForModel:(id)arg1 block:(/*^block*/id)arg2;
-(void)addSessionWithCovariates:(id)arg1 label:(long long)arg2 sessionDescriptor:(id)arg3 spotlightReference:(id)arg4 isInternal:(BOOL)arg5;
-(void)setSourceRecoverer:(/*^block*/id)arg1;
-(id)planReceivedWithPayload:(id)arg1 error:(id*)arg2;
-(void)deleteSessionsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)deleteSessionsWithBundleID:(id)arg1;
-(id)lastTrainingFeaturizationForModelName:(id)arg1 andLocale:(id)arg2;
-(void)trimDbWithDeferralBlock:(/*^block*/id)arg1;

@end

