/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)modificationDate;
-(id)subtitle2;
-(id)tags;
-(id)contentType;
-(id)subtitle;
-(id)url;
-(id)initWithMetadataItem:(id)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(unsigned long long)indentationLevel;
-(id)title;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)renameable;
-(id)urlInLocalContainer;
-(void)cacheValues:(id)arg1 ;
-(void)_removeCachedValues;
-(id)sortPathComponents;
-(void)_cacheIndentationLevelWithSortPathComponents:(id)arg1 ;
-(void)_modelChanged;
-(id)sortPath;
@end

