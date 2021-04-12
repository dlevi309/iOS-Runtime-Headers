/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFSpeechToken : NSObject <NSSecureCoding> {

	BOOL _removeSpaceBefore;
	BOOL _removeSpaceAfter;
	NSString* _text;
	NSString* _phoneSequence;
	NSString* _ipaPhoneSequence;
	long long _confidenceScore;
	double _startTime;
	double _silenceStartTime;
	double _endTime;

}

@property (nonatomic,copy) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * phoneSequence;                 //@synthesize phoneSequence=_phoneSequence - In the implementation block
@property (nonatomic,copy) NSString * ipaPhoneSequence;              //@synthesize ipaPhoneSequence=_ipaPhoneSequence - In the implementation block
@property (assign,nonatomic) long long confidenceScore;              //@synthesize confidenceScore=_confidenceScore - In the implementation block
@property (assign,nonatomic) double startTime;                       //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double silenceStartTime;                //@synthesize silenceStartTime=_silenceStartTime - In the implementation block
@property (assign,nonatomic) double endTime;                         //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) BOOL removeSpaceBefore;                 //@synthesize removeSpaceBefore=_removeSpaceBefore - In the implementation block
@property (assign,nonatomic) BOOL removeSpaceAfter;                  //@synthesize removeSpaceAfter=_removeSpaceAfter - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(long long)confidenceScore;
-(void)setRemoveSpaceBefore:(BOOL)arg1 ;
-(BOOL)removeSpaceBefore;
-(BOOL)removeSpaceAfter;
-(void)setConfidenceScore:(long long)arg1 ;
-(NSString *)phoneSequence;
-(void)setPhoneSequence:(NSString *)arg1 ;
-(double)silenceStartTime;
-(void)setSilenceStartTime:(double)arg1 ;
-(void)setRemoveSpaceAfter:(BOOL)arg1 ;
-(id)aceToken;
-(NSString *)ipaPhoneSequence;
-(void)setIpaPhoneSequence:(NSString *)arg1 ;
@end

