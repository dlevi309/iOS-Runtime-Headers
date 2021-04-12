/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PIExportMetadataBuilder.h>

@class NSArray;

@interface PIExportVideoMetadataBuilder : PIExportMetadataBuilder

@property (nonatomic,copy,readonly) NSArray * metadataItems; 
-(NSArray *)metadataItems;
-(id)titleItem;
-(id)locationItem;
-(id)commonItemForKey:(id)arg1 string:(id)arg2 ;
-(id)captionItem;
-(id)creationDateItem;
-(id)videoDateFormatter;
-(id)keywordsItem;
@end

