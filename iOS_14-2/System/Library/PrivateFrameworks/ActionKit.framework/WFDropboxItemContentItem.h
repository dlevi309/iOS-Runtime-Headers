/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@interface WFDropboxItemContentItem : WFGenericFileContentItem <WFContentItemClass>
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(BOOL)isAvailableOnPlatform:(long long)arg1 ;
-(id)metadata;
-(id)outputTypes;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(BOOL)getListAltText:(/*^block*/id)arg1 ;
-(BOOL)getListThumbnail:(/*^block*/id)arg1 forSize:(CGSize)arg2 ;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(void)getPreferredFileExtension:(/*^block*/id)arg1 ;
-(void)getPreferredFileSize:(/*^block*/id)arg1 ;
-(id)richListTitle;
-(BOOL)hasStringOutput;
-(BOOL)canEncodeWithCoder:(id)arg1 ;
-(id)overrideFilename;
-(id)representedFileType;
-(id)representedFilename;
@end

