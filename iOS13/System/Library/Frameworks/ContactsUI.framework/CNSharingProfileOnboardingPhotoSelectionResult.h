/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class UIImage, NSString;

@interface CNSharingProfileOnboardingPhotoSelectionResult : NSObject {

	BOOL _wasSelectedInFullPhotoPicker;
	UIImage* _originalImage;
	UIImage* _compositedImage;
	NSString* _variantName;
	long long _avatarType;

}

@property (nonatomic,retain) UIImage * originalImage;                        //@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,retain) UIImage * compositedImage;                      //@synthesize compositedImage=_compositedImage - In the implementation block
@property (nonatomic,copy) NSString * variantName;                           //@synthesize variantName=_variantName - In the implementation block
@property (assign,nonatomic) long long avatarType;                           //@synthesize avatarType=_avatarType - In the implementation block
@property (assign,nonatomic) BOOL wasSelectedInFullPhotoPicker;              //@synthesize wasSelectedInFullPhotoPicker=_wasSelectedInFullPhotoPicker - In the implementation block
-(UIImage *)originalImage;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(UIImage *)compositedImage;
-(void)setCompositedImage:(UIImage *)arg1 ;
-(NSString *)variantName;
-(void)setVariantName:(NSString *)arg1 ;
-(long long)avatarType;
-(void)setAvatarType:(long long)arg1 ;
-(BOOL)wasSelectedInFullPhotoPicker;
-(void)setWasSelectedInFullPhotoPicker:(BOOL)arg1 ;
@end

