/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <libobjc.A.dylib/SHMatcherDelegate.h>
#import <libobjc.A.dylib/SHSessionDriverDelegate.h>

@protocol SHRecognitionSessionDelegate, SHMatcher, SHSessionDriver;
@class SHConfiguration, NSString;

@interface SHRecognitionSession : NSObject <SHMatcherDelegate, SHSessionDriverDelegate> {

	id<SHRecognitionSessionDelegate> _delegate;
	SHConfiguration* _configuration;
	id<SHMatcher> _matcher;
	id<SHSessionDriver> _sessionDriver;

}

@property (nonatomic,retain) id<SHMatcher> matcher;                                         //@synthesize matcher=_matcher - In the implementation block
@property (nonatomic,retain) id<SHSessionDriver> sessionDriver;                             //@synthesize sessionDriver=_sessionDriver - In the implementation block
@property (nonatomic,readonly) SHConfiguration * configuration;                             //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<SHRecognitionSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)match:(id)arg1 ;
-(id<SHRecognitionSessionDelegate>)delegate;
-(void)setDelegate:(id<SHRecognitionSessionDelegate>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(SHConfiguration *)configuration;
-(void)flow:(id)arg1 atTime:(id)arg2 ;
-(id<SHMatcher>)matcher;
-(void)setMatcher:(id<SHMatcher>)arg1 ;
-(void)matcher:(id)arg1 didFailForSignature:(id)arg2 apiResponse:(id)arg3 withError:(id)arg4 ;
-(void)matcher:(id)arg1 didFindMatch:(id)arg2 forSignature:(id)arg3 apiResponse:(id)arg4 ;
-(void)matcher:(id)arg1 didNotFindMatchForSignature:(id)arg2 apiResponse:(id)arg3 ;
-(id)matcherForConfiguration:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 matcher:(id)arg2 ;
-(id<SHSessionDriver>)sessionDriver;
-(BOOL)isSessionDriverSignature:(id)arg1 ;
-(void)setSessionDriver:(id<SHSessionDriver>)arg1 ;
@end

