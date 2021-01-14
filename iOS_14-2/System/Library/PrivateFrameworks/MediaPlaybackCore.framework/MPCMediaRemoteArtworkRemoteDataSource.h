/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPArtworkDataSource.h>

@class MPCMediaRemoteController, NSString;

@interface MPCMediaRemoteArtworkRemoteDataSource : NSObject <MPArtworkDataSource> {

	MPCMediaRemoteController* _controller;

}

@property (nonatomic,__weak,readonly) MPCMediaRemoteController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(MPCMediaRemoteController *)controller;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
@end

