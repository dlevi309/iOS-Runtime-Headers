/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <libobjc.A.dylib/SHSessionDriver.h>

@protocol SHSessionDriverDelegate, SHRecognitionSessionDelegate;
@class SHSignature, SHMutableSignature, SHConfiguration, NSDate, NSString;

@interface SHStreamingSessionDriver : NSObject <SHSessionDriver> {

	BOOL _waiting;
	id<SHSessionDriverDelegate> _sessionDelegate;
	id<SHRecognitionSessionDelegate> _recognitionDelegate;
	SHMutableSignature* _mutableSignature;
	SHConfiguration* _configuration;
	double _currentRequiredLength;
	NSDate* _sessionStartDate;

}

@property (nonatomic,retain) SHMutableSignature * mutableSignature;                                    //@synthesize mutableSignature=_mutableSignature - In the implementation block
@property (nonatomic,retain) SHConfiguration * configuration;                                          //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL waiting;                                                             //@synthesize waiting=_waiting - In the implementation block
@property (assign,nonatomic) double currentRequiredLength;                                             //@synthesize currentRequiredLength=_currentRequiredLength - In the implementation block
@property (nonatomic,retain) NSDate * sessionStartDate;                                                //@synthesize sessionStartDate=_sessionStartDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SHSessionDriverDelegate> sessionDelegate;                       //@synthesize sessionDelegate=_sessionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SHRecognitionSessionDelegate> recognitionDelegate;              //@synthesize recognitionDelegate=_recognitionDelegate - In the implementation block
@property (nonatomic,readonly) SHSignature * matchingSignature; 
-(void)reset;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setConfiguration:(SHConfiguration *)arg1 ;
-(SHConfiguration *)configuration;
-(void)setSessionDelegate:(id<SHSessionDriverDelegate>)arg1 ;
-(id<SHSessionDriverDelegate>)sessionDelegate;
-(NSDate *)sessionStartDate;
-(void)setSessionStartDate:(NSDate *)arg1 ;
-(BOOL)waiting;
-(void)matcher:(id)arg1 didFailForSignature:(id)arg2 apiResponse:(id)arg3 withError:(id)arg4 ;
-(void)matcher:(id)arg1 didFindMatch:(id)arg2 forSignature:(id)arg3 apiResponse:(id)arg4 ;
-(void)matcher:(id)arg1 didNotFindMatchForSignature:(id)arg2 apiResponse:(id)arg3 ;
-(SHMutableSignature *)mutableSignature;
-(id<SHRecognitionSessionDelegate>)recognitionDelegate;
-(double)currentRequiredLength;
-(void)setWaiting:(BOOL)arg1 ;
-(void)setMutableSignature:(SHMutableSignature *)arg1 ;
-(void)setCurrentRequiredLength:(double)arg1 ;
-(void)startResetTimerForIntermission:(double)arg1 ;
-(void)flow:(id)arg1 time:(id)arg2 ;
-(void)setRecognitionDelegate:(id<SHRecognitionSessionDelegate>)arg1 ;
-(SHSignature *)matchingSignature;
@end

