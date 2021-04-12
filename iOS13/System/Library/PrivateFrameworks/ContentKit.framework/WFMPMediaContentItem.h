/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class MPMediaItem, NSString;

@interface WFMPMediaContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (nonatomic,readonly) MPMediaItem * mediaItem; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * artist; 
@property (nonatomic,readonly) NSString * albumTitle; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)filterDescription;
+(id)pluralFilterDescription;
+(BOOL)hasLibrary;
+(void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)isAvailableOnPlatform:(long long)arg1 ;
-(NSString *)title;
-(NSString *)artist;
-(id)assetURL;
-(MPMediaItem *)mediaItem;
-(NSString *)albumTitle;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(BOOL)getListAltText:(/*^block*/id)arg1 ;
-(BOOL)getListThumbnail:(/*^block*/id)arg1 forSize:(CGSize)arg2 ;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)getPreferredFileSize:(/*^block*/id)arg1 ;
-(id)additionalRepresentationsForSerialization;
-(id)preferredFileType;
@end

