/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

@class SHSignature;


@protocol SHSessionDriver <SHMatcherDelegate>
@property (assign,nonatomic,__weak) id<SHSessionDriverDelegate> sessionDelegate; 
@property (assign,nonatomic,__weak) id<SHRecognitionSessionDelegate> recognitionDelegate; 
@property (nonatomic,readonly) SHSignature * matchingSignature; 
@required
-(void)setSessionDelegate:(id)arg1;
-(id<SHSessionDriverDelegate>)sessionDelegate;
-(id<SHRecognitionSessionDelegate>)recognitionDelegate;
-(void)flow:(id)arg1 time:(id)arg2;
-(void)setRecognitionDelegate:(id)arg1;
-(SHSignature *)matchingSignature;

@end

