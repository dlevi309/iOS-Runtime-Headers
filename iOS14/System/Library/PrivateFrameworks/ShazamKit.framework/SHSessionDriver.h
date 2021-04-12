/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

@class SHSignature;


@protocol SHSessionDriver <SHMatcherDelegate>
@property (assign,nonatomic,__weak) id<SHSessionDriverDelegate> sessionDelegate; 
@property (nonatomic,readonly) SHSignature * matchingSignature; 
@required
-(id<SHSessionDriverDelegate>)sessionDelegate;
-(void)setSessionDelegate:(id)arg1;
-(void)flow:(id)arg1 time:(id)arg2;
-(SHSignature *)matchingSignature;

@end

