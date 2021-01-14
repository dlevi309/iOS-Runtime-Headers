/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)modificationDate;
-(id)initWithContainer:(id)arg1 ;
-(id)subtitle;
-(id)url;
-(long long)type;
-(BRContainer *)container;
-(id)title;
-(void)_modelChanged;
-(id)sortPath;
-(id)_blockingThumbnailWithSize:(CGSize)arg1 scale:(double)arg2 wantsBorder:(BOOL*)arg3 ;
@end

