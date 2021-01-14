/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _LTSpeechRecognitionTokensAlternative : NSObject <NSSecureCoding> {

	BOOL _lowConfidence;
	BOOL _hasSpaceAfter;
	NSString* _text;
	long long _confidence;

}

@property (nonatomic,copy) NSString * text;                                          //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long confidence;                                   //@synthesize confidence=_confidence - In the implementation block
@property (assign,getter=isLowConfidence,nonatomic) BOOL lowConfidence;              //@synthesize lowConfidence=_lowConfidence - In the implementation block
@property (assign,nonatomic) BOOL hasSpaceAfter;                                     //@synthesize hasSpaceAfter=_hasSpaceAfter - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)confidence;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isLowConfidence;
-(void)setLowConfidence:(BOOL)arg1 ;
-(void)setConfidence:(long long)arg1 ;
-(NSString *)text;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasSpaceAfter;
-(void)setHasSpaceAfter:(BOOL)arg1 ;
@end

