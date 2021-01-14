/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

@class NSString;


@protocol CACVoiceOverDescribable
@property (nonatomic,readonly) NSString * unfilteredRecognitionLabel; 
@property (nonatomic,readonly) NSString * recognitionLabel; 
@property (nonatomic,readonly) NSString * fullLabel; 
@property (nonatomic,readonly) NSString * valueLabel; 
@property (nonatomic,readonly) NSString * numberedLabel; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) CGRect frame; 
@required
-(unsigned long long)traits;
-(CGRect)frame;
-(NSString *)valueLabel;
-(NSString *)unfilteredRecognitionLabel;
-(NSString *)recognitionLabel;
-(NSString *)fullLabel;
-(NSString *)numberedLabel;

@end

