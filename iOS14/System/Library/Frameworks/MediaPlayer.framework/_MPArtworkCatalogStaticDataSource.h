/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPArtworkDataSource.h>

@class NSString;

@interface _MPArtworkCatalogStaticDataSource : NSObject <MPArtworkDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDataSource;
-(BOOL)areRepresentationsOfKind:(long long)arg1 availableForCatalog:(id)arg2 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)existingRepresentationOfKind:(long long)arg1 forArtworkCatalog:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(void)loadRepresentationOfKind:(long long)arg1 forArtworkCatalog:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

