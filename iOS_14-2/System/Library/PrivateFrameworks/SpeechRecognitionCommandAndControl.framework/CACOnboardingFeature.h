/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@class NSString;

@interface CACOnboardingFeature : NSObject {

	NSString* _titleText;
	NSString* _helperText;
	NSString* _imageBundleName;

}

@property (nonatomic,retain) NSString * titleText;                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) NSString * helperText;                   //@synthesize helperText=_helperText - In the implementation block
@property (nonatomic,retain) NSString * imageBundleName;              //@synthesize imageBundleName=_imageBundleName - In the implementation block
+(id)featureWithTitleText:(id)arg1 helperText:(id)arg2 imageBundleName:(id)arg3 ;
+(id)featureWithTitleText:(id)arg1 helperText:(id)arg2 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)helperText;
-(id)initWithTitleText:(id)arg1 helperText:(id)arg2 imageBundleName:(id)arg3 ;
-(void)setHelperText:(NSString *)arg1 ;
-(NSString *)imageBundleName;
-(void)setImageBundleName:(NSString *)arg1 ;
@end

