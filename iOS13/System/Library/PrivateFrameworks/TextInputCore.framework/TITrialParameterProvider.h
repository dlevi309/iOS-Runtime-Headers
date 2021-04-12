/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class TRIClient, NSString;

@interface TITrialParameterProvider : NSObject {

	BOOL _hasPendingNamespaceUpdate;
	TRIClient* _trialClient;
	NSString* _currentExperimentId;

}

@property (assign) BOOL hasPendingNamespaceUpdate;              //@synthesize hasPendingNamespaceUpdate=_hasPendingNamespaceUpdate - In the implementation block
@property (readonly) TRIClient * trialClient;                   //@synthesize trialClient=_trialClient - In the implementation block
@property (retain) NSString * currentExperimentId;              //@synthesize currentExperimentId=_currentExperimentId - In the implementation block
+(id)defaultParameterProvider;
+(void)initializeTrialProvider;
+(id)trialParameterKeys;
+(id)getTrialParametersAndBeginNewSession;
-(id)init;
-(TRIClient *)trialClient;
-(id)currentTrialParameters;
-(void)rollOverSessionIfNecessary;
-(BOOL)hasPendingNamespaceUpdate;
-(void)setHasPendingNamespaceUpdate:(BOOL)arg1 ;
-(NSString *)currentExperimentId;
-(void)setCurrentExperimentId:(NSString *)arg1 ;
@end

