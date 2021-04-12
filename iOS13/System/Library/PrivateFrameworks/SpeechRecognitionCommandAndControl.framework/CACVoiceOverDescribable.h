/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGRect)frame;
-(unsigned long long)traits;
-(NSString *)valueLabel;
-(NSString *)unfilteredRecognitionLabel;
-(NSString *)recognitionLabel;
-(NSString *)fullLabel;
-(NSString *)numberedLabel;

@end

