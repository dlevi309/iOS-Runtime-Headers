/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@interface WFPodcastEpisodeContentItem : WFContentItem <WFContentItemClass>
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
-(id)episode;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(BOOL)getListThumbnail:(/*^block*/id)arg1 forSize:(CGSize)arg2 ;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(id)preferredFileType;
-(id)getArtworkURLForSize:(CGSize)arg1 type:(id)arg2 ;
-(void)getArtworkDataWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

