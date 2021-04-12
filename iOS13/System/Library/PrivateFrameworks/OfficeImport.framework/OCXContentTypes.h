/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray, NSMutableSet, NSMutableDictionary;

@interface OCXContentTypes : NSObject {

	NSMutableArray* mContentTypes;
	NSMutableSet* mDefaultTypes;
	NSMutableDictionary* mContentTypeObjectMap;
	NSMutableDictionary* mContentTypeCountMap;

}
+(id)relativePathForPath:(id)arg1 currentPath:(id)arg2 ;
-(id)init;
-(id)pathForKey:(id)arg1 ;
-(void)populateCommonExtensions;
-(id)uniquePathForPath:(id)arg1 ;
-(id)addContentTypeForKey:(id)arg1 contentType:(id)arg2 path:(id)arg3 ;
-(id)pathForContentType:(id)arg1 ;
-(id)pathForMainDocument;
-(BOOL)containsContentType:(id)arg1 ;
-(BOOL)containsContentType:(id)arg1 withKey:(id)arg2 ;
-(BOOL)isLastEntryContentType:(id)arg1 ;
-(void)writeContentTypesToStream:(id)arg1 ;
-(void)addContentTypeForContentType:(id)arg1 extension:(id)arg2 ;
@end

