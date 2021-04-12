/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)variantIdentifier;
-(long long)type;
-(id)initWithImageProvider:(/*^block*/id)arg1 type:(long long)arg2 ;
-(void)setVariantIdentifier:(NSString *)arg1 ;
-(id)initWithImageProvider:(/*^block*/id)arg1 originalImageProvider:(/*^block*/id)arg2 type:(long long)arg3 ;
-(id)originalImageProvider;
-(BOOL)wasSetFromFullPhotoPicker;
-(void)setWasSetFromFullPhotoPicker:(BOOL)arg1 ;
-(id)imageProvider;
@end

