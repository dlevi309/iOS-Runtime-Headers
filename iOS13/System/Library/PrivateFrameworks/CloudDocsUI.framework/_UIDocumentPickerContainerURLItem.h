/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/_UIDocumentPickerContainerItem.h>

@class NSURL, NSString, NSArray, NSDate;

@interface _UIDocumentPickerContainerURLItem : _UIDocumentPickerContainerItem {

	NSURL* _url;
	long long _cachedType;
	NSString* _cachedTitle;
	NSString* _cachedSubtitle;
	NSString* _cachedSubtitle2;
	NSArray* _cachedTags;
	unsigned long long _cachedIndentation;
	NSString* _cachedSortPath;
	NSString* _cachedContentType;
	NSDate* _cachedContentModifiedDate;
	BOOL _cachedIsAlias;
	id _generationIdentifier;

}
+(id)defaultKeys;
-(long long)type;
-(id)initWithURL:(id)arg1 ;
-(id)url;
-(id)tags;
-(id)title;
-(id)contentType;
-(id)modificationDate;
-(id)subtitle;
-(unsigned long long)indentationLevel;
-(id)subtitle2;
-(BOOL)renameable;
-(BOOL)isAlias;
-(id)urlInLocalContainer;
-(void)_removeCachedValues;
-(id)sortPathComponents;
-(void)_cacheIndentationLevelWithSortPathComponents:(id)arg1 ;
-(void)_modelChanged;
-(id)sortPath;
-(BOOL)attributesModified:(id)arg1 ;
-(void)cacheValues;
@end

