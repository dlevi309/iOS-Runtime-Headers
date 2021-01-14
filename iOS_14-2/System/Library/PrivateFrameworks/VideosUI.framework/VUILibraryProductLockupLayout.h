/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/VUILibraryProductLockupViewLayout.h>

@class VUIMediaEntityType, NSString;

@interface VUILibraryProductLockupLayout : NSObject <VUILibraryProductLockupViewLayout> {

	long long _type;
	VUIMediaEntityType* _entityType;

}

@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) VUIMediaEntityType * entityType;              //@synthesize entityType=_entityType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VUIMediaEntityType *)entityType;
-(long long)type;
-(id)initWithLayoutType:(long long)arg1 entityType:(id)arg2 ;
-(CGSize)coverArtImageSize;
-(int)contentDescriptionNumberOfLines;
-(id)contentDescriptionFont;
-(long long)layoutTypeForWindowWidth:(double)arg1 ;
-(double)coverArtImageRightMargin;
-(double)contentDescriptionTopMarginForWindowWidth:(double)arg1 ;
-(double)buttonModuleTopMarginForWindowWidth:(double)arg1 ;
-(double)subtitleTopMarginForWindowWidth:(double)arg1 ;
-(double)contentDescriptionBottomMarginForWindowWidth:(double)arg1 ;
-(double)metadataTopMargin;
-(long long)downloadButtonPosition;
-(double)coverArtBottomPadding;
-(double)titleTopMargin;
-(BOOL)shouldShowTitleLabel;
@end

