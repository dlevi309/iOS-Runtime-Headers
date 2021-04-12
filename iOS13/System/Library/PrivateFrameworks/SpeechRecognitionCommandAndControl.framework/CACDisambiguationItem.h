/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@class NSString, UIImage;

@interface CACDisambiguationItem : NSObject {

	long long _type;

}

@property (assign,nonatomic) long long type;                     //@synthesize type=_type - In the implementation block
@property (readonly) NSString * displayName; 
@property (readonly) NSString * displayDescription; 
@property (readonly) UIImage * displayImage; 
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)displayName;
-(UIImage *)displayImage;
-(void)startInteraction;
-(NSString *)displayDescription;
@end

