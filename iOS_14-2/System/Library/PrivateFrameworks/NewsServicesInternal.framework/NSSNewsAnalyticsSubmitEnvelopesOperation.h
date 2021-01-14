/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
*/

#import <NewsCore/FCOperation.h>

@protocol FCNewsAppConfigurationManagerFCCoreConfigurationManager;
@class NSArray;

@interface NSSNewsAnalyticsSubmitEnvelopesOperation : FCOperation {

	NSArray* _envelopes;
	/*^block*/id _handoffCompletion;
	/*^block*/id _submissionCompletion;
	id<FCNewsAppConfigurationManager><FCCoreConfigurationManager> _appConfigurationManager;

}

@property (nonatomic,copy) NSArray * envelopes;                                                                                  //@synthesize envelopes=_envelopes - In the implementation block
@property (nonatomic,copy) id handoffCompletion;                                                                                 //@synthesize handoffCompletion=_handoffCompletion - In the implementation block
@property (nonatomic,copy) id submissionCompletion;                                                                              //@synthesize submissionCompletion=_submissionCompletion - In the implementation block
@property (nonatomic,retain) id<FCNewsAppConfigurationManager><FCCoreConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(void)setHandoffCompletion:(id)arg1 ;
-(NSArray *)envelopes;
-(id)init;
-(void)operationDidFinishWithError:(id)arg1 ;
-(void)setAppConfigurationManager:(id<FCNewsAppConfigurationManager><FCCoreConfigurationManager>)arg1 ;
-(void)setEnvelopes:(NSArray *)arg1 ;
-(void)setSubmissionCompletion:(id)arg1 ;
-(id<FCNewsAppConfigurationManager><FCCoreConfigurationManager>)appConfigurationManager;
-(id)handoffCompletion;
-(id)submissionCompletion;
@end

