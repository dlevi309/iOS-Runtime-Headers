/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <ShazamKit/SHSession.h>

@protocol SHSessionDelegate;
@class SHStore;

@interface SHRecognitionSession : SHSession {

	id<SHSessionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SHSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SHStore * configuration; 
-(id<SHSessionDelegate>)delegate;
-(void)match:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDelegate:(id<SHSessionDelegate>)arg1 ;
-(SHStore *)configuration;
-(void)matcher:(id)arg1 didNotFindMatchForSignature:(id)arg2 matcherResponse:(id)arg3 ;
-(void)matcher:(id)arg1 didFailForSignature:(id)arg2 matcherResponse:(id)arg3 withError:(id)arg4 ;
-(void)flow:(id)arg1 atTime:(id)arg2 ;
@end

