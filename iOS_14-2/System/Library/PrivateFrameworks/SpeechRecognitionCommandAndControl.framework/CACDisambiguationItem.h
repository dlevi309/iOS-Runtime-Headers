/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)displayDescription;
-(void)setType:(long long)arg1 ;
-(void)startInteraction;
-(UIImage *)displayImage;
-(long long)type;
-(NSString *)displayName;
@end

