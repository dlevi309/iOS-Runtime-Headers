/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <CloudDocsUI/_UIDocumentPickerContainerItem.h>

@class NSString, BRContainer;

@interface _UIDocumentPickerContainerContainerItem : _UIDocumentPickerContainerItem {

	NSString* _cachedSubtitle;
	BRContainer* _container;

}

@property (nonatomic,readonly) BRContainer * container; 
-(BRContainer *)container;
-(long long)type;
-(id)url;
-(id)title;
-(id)modificationDate;
-(id)subtitle;
-(id)initWithContainer:(id)arg1 ;
-(void)_modelChanged;
-(id)sortPath;
-(id)_blockingThumbnailWithSize:(CGSize)arg1 scale:(double)arg2 wantsBorder:(BOOL*)arg3 ;
@end

