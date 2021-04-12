/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
*/


#import <MarkupUI/MarkupUI-Structs.h>
@interface MUImageReader : NSObject
+(BOOL)hasPrivateImageMetadata:(id)arg1 ;
+(id)cleanImageMetadataFromData:(id)arg1 ;
+(id)_privateImageMetadataDescriptors;
-(id)_readAnnotationsFromDataProvider:(CGDataProviderRef)arg1 ;
-(void)readAnnotationsFromArchivedModelData:(id)arg1 toController:(id)arg2 ;
-(id)_readDataFromTagAtPath:(id)arg1 inMetadata:(CGImageMetadataRef)arg2 ;
-(id)_readBaseImageFromDataProvider:(CGDataProviderRef)arg1 providerSource:(id)arg2 baseWasValid:(BOOL*)arg3 ;
-(BOOL)readAnnotationsFromData:(id)arg1 toController:(id)arg2 ;
-(BOOL)readAnnotationsFromImageAtURL:(id)arg1 toController:(id)arg2 ;
-(id)readArchivedModelDataFromImageData:(id)arg1 ;
-(id)readArchivedModelDataFromImageURL:(id)arg1 ;
-(id)readBaseImageFromData:(id)arg1 baseWasValid:(BOOL*)arg2 ;
-(id)readBaseImageFromImageAtURL:(id)arg1 baseWasValid:(BOOL*)arg2 ;
@end

