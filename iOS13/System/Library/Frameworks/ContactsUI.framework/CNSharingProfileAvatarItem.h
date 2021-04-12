/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class NSString;

@interface CNSharingProfileAvatarItem : NSObject {

	BOOL _wasSetFromFullPhotoPicker;
	/*^block*/id _imageProvider;
	/*^block*/id _originalImageProvider;
	long long _type;
	NSString* _variantIdentifier;

}

@property (nonatomic,copy,readonly) id imageProvider;                      //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,copy,readonly) id originalImageProvider;              //@synthesize originalImageProvider=_originalImageProvider - In the implementation block
@property (nonatomic,readonly) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * variantIdentifier;                   //@synthesize variantIdentifier=_variantIdentifier - In the implementation block
@property (assign,nonatomic) BOOL wasSetFromFullPhotoPicker;               //@synthesize wasSetFromFullPhotoPicker=_wasSetFromFullPhotoPicker - In the implementation block
-(long long)type;
-(NSString *)variantIdentifier;
-(id)imageProvider;
-(id)initWithImageProvider:(/*^block*/id)arg1 type:(long long)arg2 ;
-(id)initWithImageProvider:(/*^block*/id)arg1 originalImageProvider:(/*^block*/id)arg2 type:(long long)arg3 ;
-(id)originalImageProvider;
-(void)setVariantIdentifier:(NSString *)arg1 ;
-(BOOL)wasSetFromFullPhotoPicker;
-(void)setWasSetFromFullPhotoPicker:(BOOL)arg1 ;
@end

