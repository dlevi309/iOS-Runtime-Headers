/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner
*/


@class NSData, NSNumber, NSString;

@interface QuickTypeWeightUpdates : NSObject {

	NSData* _weightUpdates;
	NSNumber* _l2Norm;
	NSNumber* _maxNorm;
	NSString* _privacyDiagnosticReport;
	NSString* _weightUpdatesDiagnosticReport;

}

@property (nonatomic,retain) NSData * weightUpdates;                              //@synthesize weightUpdates=_weightUpdates - In the implementation block
@property (nonatomic,copy) NSNumber * l2Norm;                                     //@synthesize l2Norm=_l2Norm - In the implementation block
@property (nonatomic,copy) NSNumber * maxNorm;                                    //@synthesize maxNorm=_maxNorm - In the implementation block
@property (nonatomic,copy) NSString * privacyDiagnosticReport;                    //@synthesize privacyDiagnosticReport=_privacyDiagnosticReport - In the implementation block
@property (nonatomic,copy) NSString * weightUpdatesDiagnosticReport;              //@synthesize weightUpdatesDiagnosticReport=_weightUpdatesDiagnosticReport - In the implementation block
-(NSNumber *)l2Norm;
-(NSNumber *)maxNorm;
-(NSData *)weightUpdates;
-(NSString *)privacyDiagnosticReport;
-(NSString *)weightUpdatesDiagnosticReport;
-(void)setWeightUpdates:(NSData *)arg1 ;
-(void)setL2Norm:(NSNumber *)arg1 ;
-(void)setMaxNorm:(NSNumber *)arg1 ;
-(void)setPrivacyDiagnosticReport:(NSString *)arg1 ;
-(void)setWeightUpdatesDiagnosticReport:(NSString *)arg1 ;
@end

