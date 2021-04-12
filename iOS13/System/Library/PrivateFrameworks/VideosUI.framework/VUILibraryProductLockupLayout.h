/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(VUIMediaEntityType *)entityType;
-(long long)layoutType;
-(id)initWithLayoutType:(long long)arg1 entityType:(id)arg2 ;
-(CGSize)coverArtImageSize;
-(int)contentDescriptionNumberOfLines;
-(id)contentDescriptionFont;
-(double)coverArtImageRightMargin;
-(double)contentDescriptionTopMargin;
-(double)buttonModuleTopMargin;
-(double)subtitleTopMargin;
-(double)contentDescriptionBottomMargin;
-(double)metadataTopMargin;
-(long long)downloadButtonPosition;
-(double)coverArtBottomPadding;
-(double)titleTopMargin;
-(BOOL)shouldShowTitleLabel;
@end

