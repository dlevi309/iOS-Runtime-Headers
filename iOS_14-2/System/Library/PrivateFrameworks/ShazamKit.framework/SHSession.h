/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <libobjc.A.dylib/SHMatcherDelegate.h>
#import <libobjc.A.dylib/SHSessionDriverDelegate.h>

@protocol SHSessionDelegate, SHMatcher, SHSessionDriver;
@class SHStore, NSString;

@interface SHSession : NSObject <SHMatcherDelegate, SHSessionDriverDelegate> {

	id<SHSessionDelegate> _delegate;
	SHStore* _store;
	id<SHMatcher> _matcher;
	id<SHSessionDriver> _sessionDriver;

}

@property (nonatomic,retain) id<SHMatcher> matcher;                              //@synthesize matcher=_matcher - In the implementation block
@property (nonatomic,retain) id<SHSessionDriver> sessionDriver;                  //@synthesize sessionDriver=_sessionDriver - In the implementation block
@property (nonatomic,readonly) SHStore * store;                                  //@synthesize store=_store - In the implementation block
@property (assign,nonatomic,__weak) id<SHSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(SHStore *)store;
-(id<SHSessionDelegate>)delegate;
-(id)initWithStore:(id)arg1 ;
-(id<SHMatcher>)matcher;
-(void)setDelegate:(id<SHSessionDelegate>)arg1 ;
-(id)configuration;
-(void)matchSignature:(id)arg1 ;
-(void)matcher:(id)arg1 didFindMatchingResponse:(id)arg2 ;
-(void)matcher:(id)arg1 didNotFindMatchForSignature:(id)arg2 matcherResponse:(id)arg3 ;
-(void)matcher:(id)arg1 didFailForSignature:(id)arg2 matcherResponse:(id)arg3 withError:(id)arg4 ;
-(void)didFinishForMatcher:(id)arg1 ;
-(id)matcherForStore:(id)arg1 ;
-(id)initWithStore:(id)arg1 matcher:(id)arg2 ;
-(BOOL)isSessionDriverSignature:(id)arg1 ;
-(id<SHSessionDriver>)sessionDriver;
-(void)matchStreamingBuffer:(id)arg1 atTime:(id)arg2 ;
-(void)setMatcher:(id<SHMatcher>)arg1 ;
-(void)setSessionDriver:(id<SHSessionDriver>)arg1 ;
@end

