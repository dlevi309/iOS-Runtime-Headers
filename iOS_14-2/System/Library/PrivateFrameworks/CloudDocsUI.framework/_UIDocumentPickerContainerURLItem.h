/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)modificationDate;
-(id)subtitle2;
-(id)tags;
-(id)initWithURL:(id)arg1 ;
-(id)contentType;
-(id)subtitle;
-(id)url;
-(long long)type;
-(unsigned long long)indentationLevel;
-(BOOL)isAlias;
-(id)title;
-(BOOL)renameable;
-(id)urlInLocalContainer;
-(void)_removeCachedValues;
-(id)sortPathComponents;
-(void)_cacheIndentationLevelWithSortPathComponents:(id)arg1 ;
-(void)_modelChanged;
-(id)sortPath;
-(BOOL)attributesModified:(id)arg1 ;
-(void)cacheValues;
@end

