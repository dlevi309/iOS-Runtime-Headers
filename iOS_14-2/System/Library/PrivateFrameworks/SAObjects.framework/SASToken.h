/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASToken : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL addSpaceAfter; 
@property (nonatomic,copy) NSNumber * confidenceScore; 
@property (nonatomic,copy) NSNumber * endTime; 
@property (nonatomic,copy) NSString * ipaPhoneSequence; 
@property (nonatomic,copy) NSString * originalText; 
@property (nonatomic,copy) NSString * phoneSequence; 
@property (nonatomic,copy) NSString * recognitionStability; 
@property (assign,nonatomic) BOOL removeSpaceAfter; 
@property (assign,nonatomic) BOOL removeSpaceBefore; 
@property (nonatomic,copy) NSNumber * silenceStartTime; 
@property (nonatomic,copy) NSNumber * startTime; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)token;
-(id)af_speechToken;
-(id)groupIdentifier;
-(void)setSilenceStartTime:(NSNumber *)arg1 ;
-(void)setPhoneSequence:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)silenceStartTime;
-(NSNumber *)confidenceScore;
-(void)setRemoveSpaceBefore:(BOOL)arg1 ;
-(void)setStartTime:(NSNumber *)arg1 ;
-(BOOL)removeSpaceBefore;
-(BOOL)removeSpaceAfter;
-(void)setConfidenceScore:(NSNumber *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setRemoveSpaceAfter:(BOOL)arg1 ;
-(void)setIpaPhoneSequence:(NSString *)arg1 ;
-(NSString *)originalText;
-(NSString *)text;
-(void)setOriginalText:(NSString *)arg1 ;
-(BOOL)addSpaceAfter;
-(void)setAddSpaceAfter:(BOOL)arg1 ;
-(NSString *)recognitionStability;
-(void)setRecognitionStability:(NSString *)arg1 ;
-(void)setEndTime:(NSNumber *)arg1 ;
-(NSNumber *)endTime;
-(NSNumber *)startTime;
-(NSString *)phoneSequence;
-(NSString *)ipaPhoneSequence;
@end

