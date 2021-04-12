/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(NSString *)helperText;
-(id)initWithTitleText:(id)arg1 helperText:(id)arg2 imageBundleName:(id)arg3 ;
-(void)setHelperText:(NSString *)arg1 ;
-(NSString *)imageBundleName;
-(void)setImageBundleName:(NSString *)arg1 ;
@end

