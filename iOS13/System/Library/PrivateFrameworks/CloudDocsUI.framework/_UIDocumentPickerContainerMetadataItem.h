/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/_UIDocumentPickerContainerItem.h>

@class NSString, NSArray, NSURL, NSDate, NSNumber;

@interface _UIDocumentPickerContainerMetadataItem : _UIDocumentPickerContainerItem {

	long long _cachedType;
	NSString* _cachedTitle;
	NSString* _cachedSubtitle;
	NSString* _cachedSubtitle2;
	NSArray* _cachedTags;
	NSURL* _cachedURL;
	NSURL* _cachedURLInLocalContainer;
	unsigned long long _cachedIndentation;
	NSString* _cachedSortPath;
	NSString* _cachedContentType;
	NSDate* _cachedContentModifiedDate;
	NSNumber* _cachedFileObjectID;
	BOOL _cachedRenameable;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)type;
-(id)url;
-(id)tags;
-(id)title;
-(id)contentType;
-(id)modificationDate;
-(id)subtitle;
-(unsigned long long)indentationLevel;
-(id)initWithMetadataItem:(id)arg1 ;
-(id)subtitle2;
-(BOOL)renameable;
-(id)urlInLocalContainer;
-(void)cacheValues:(id)arg1 ;
-(void)_removeCachedValues;
-(id)sortPathComponents;
-(void)_cacheIndentationLevelWithSortPathComponents:(id)arg1 ;
-(void)_modelChanged;
-(id)sortPath;
@end

