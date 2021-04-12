/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <libobjc.A.dylib/SHSessionDriver.h>

@protocol SHSessionDriverDelegate;
@class SHSignature, SHSignatureBuffer, SHSignatureMetrics, NSString;

@interface SHStreamingSessionDriver : NSObject <SHSessionDriver> {

	BOOL _waiting;
	id<SHSessionDriverDelegate> _sessionDelegate;
	double _currentRequiredLength;
	double _maximumSignatureLength;
	double _minimumSignatureLength;
	SHSignatureBuffer* _signatureBuffer;
	SHSignatureMetrics* _metrics;

}

@property (assign,nonatomic) BOOL waiting;                                                    //@synthesize waiting=_waiting - In the implementation block
@property (assign,nonatomic) double currentRequiredLength;                                    //@synthesize currentRequiredLength=_currentRequiredLength - In the implementation block
@property (assign,nonatomic) double maximumSignatureLength;                                   //@synthesize maximumSignatureLength=_maximumSignatureLength - In the implementation block
@property (assign,nonatomic) double minimumSignatureLength;                                   //@synthesize minimumSignatureLength=_minimumSignatureLength - In the implementation block
@property (nonatomic,retain) SHSignatureBuffer * signatureBuffer;                             //@synthesize signatureBuffer=_signatureBuffer - In the implementation block
@property (nonatomic,retain) SHSignatureMetrics * metrics;                                    //@synthesize metrics=_metrics - In the implementation block
@property (assign,nonatomic,__weak) id<SHSessionDriverDelegate> sessionDelegate;              //@synthesize sessionDelegate=_sessionDelegate - In the implementation block
@property (nonatomic,readonly) SHSignature * matchingSignature; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMetrics:(SHSignatureMetrics *)arg1 ;
-(SHSignatureMetrics *)metrics;
-(id<SHSessionDriverDelegate>)sessionDelegate;
-(void)setSessionDelegate:(id<SHSessionDriverDelegate>)arg1 ;
-(void)match;
-(BOOL)waiting;
-(double)minimumSignatureLength;
-(double)maximumSignatureLength;
-(SHSignatureBuffer *)signatureBuffer;
-(void)flow:(id)arg1 time:(id)arg2 ;
-(SHSignature *)matchingSignature;
-(double)currentRequiredLength;
-(void)setWaiting:(BOOL)arg1 ;
-(void)setCurrentRequiredLength:(double)arg1 ;
-(BOOL)isCurrentSignature:(id)arg1 ;
-(double)clampTimeInterval:(double)arg1 ;
-(void)startResetTimerForIntermission:(double)arg1 requiredSignatureLength:(double)arg2 ;
-(void)matcher:(id)arg1 didFindMatchingResponse:(id)arg2 ;
-(void)matcher:(id)arg1 didNotFindMatchForSignature:(id)arg2 matcherResponse:(id)arg3 ;
-(void)matcher:(id)arg1 didFailForSignature:(id)arg2 matcherResponse:(id)arg3 withError:(id)arg4 ;
-(void)didFinishForMatcher:(id)arg1 ;
-(id)initWithMinimumSignatureLength:(double)arg1 maximumSignatureLength:(double)arg2 ;
-(void)setMaximumSignatureLength:(double)arg1 ;
-(void)setMinimumSignatureLength:(double)arg1 ;
-(void)setSignatureBuffer:(SHSignatureBuffer *)arg1 ;
@end

