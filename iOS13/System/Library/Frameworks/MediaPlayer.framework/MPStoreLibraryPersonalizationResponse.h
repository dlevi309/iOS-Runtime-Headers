/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelResponse.h>
#import <libobjc.A.dylib/MPModelResponseDetailedKeepLocalStatusRequesting.h>

@class MPSectionedCollection, MPModelResponse, NSString;

@interface MPStoreLibraryPersonalizationResponse : MPModelResponse <MPModelResponseDetailedKeepLocalStatusRequesting> {

	MPSectionedCollection* _representedObjectResults;
	MPModelResponse* _libraryResponse;

}

@property (nonatomic,retain) MPSectionedCollection * representedObjectResults;              //@synthesize representedObjectResults=_representedObjectResults - In the implementation block
@property (nonatomic,retain) MPModelResponse * libraryResponse;                             //@synthesize libraryResponse=_libraryResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)setLibraryResponse:(MPModelResponse *)arg1 ;
-(void)_libraryResponseDidInvalidateNotification:(id)arg1 ;
-(MPSectionedCollection *)representedObjectResults;
-(void)setRepresentedObjectResults:(MPSectionedCollection *)arg1 ;
-(MPModelResponse *)libraryResponse;
@end

