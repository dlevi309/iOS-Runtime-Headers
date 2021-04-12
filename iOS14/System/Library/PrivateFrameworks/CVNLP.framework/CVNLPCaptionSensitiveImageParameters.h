/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/


@class NSString, NSArray;

@interface CVNLPCaptionSensitiveImageParameters : NSObject {

	NSString* _visionIdentifier;
	double _minConfidence;
	NSArray* _blockingTokens;

}

@property (nonatomic,readonly) NSString * visionIdentifier;              //@synthesize visionIdentifier=_visionIdentifier - In the implementation block
@property (nonatomic,readonly) double minConfidence;                     //@synthesize minConfidence=_minConfidence - In the implementation block
@property (nonatomic,readonly) NSArray * blockingTokens;                 //@synthesize blockingTokens=_blockingTokens - In the implementation block
-(double)minConfidence;
-(id)initWithVisionIdentifier:(id)arg1 minConfidence:(double)arg2 commonBlockingTokens:(id)arg3 categoryBlockingTokens:(id)arg4 categoryBlockingTokensAnnex:(id)arg5 ;
-(NSString *)visionIdentifier;
-(NSArray *)blockingTokens;
@end

