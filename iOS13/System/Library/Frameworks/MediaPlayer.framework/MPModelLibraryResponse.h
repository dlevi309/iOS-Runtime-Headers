/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelResponse.h>
#import <libobjc.A.dylib/MPModelResponseDetailedKeepLocalStatusRequesting.h>

@class NSArray, MPMediaLibraryConnectionAssertion, NSString;

@interface MPModelLibraryResponse : MPModelResponse <MPModelResponseDetailedKeepLocalStatusRequesting> {

	NSArray* _sectionKeepLocalStatusConfigurations;
	MPMediaLibraryConnectionAssertion* _libraryAssertion;

}

@property (nonatomic,copy) NSArray * sectionKeepLocalStatusConfigurations;                      //@synthesize sectionKeepLocalStatusConfigurations=_sectionKeepLocalStatusConfigurations - In the implementation block
@property (nonatomic,retain) MPMediaLibraryConnectionAssertion * libraryAssertion;              //@synthesize libraryAssertion=_libraryAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithRequest:(id)arg1 ;
-(id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(NSArray *)sectionKeepLocalStatusConfigurations;
-(void)setSectionKeepLocalStatusConfigurations:(NSArray *)arg1 ;
-(MPMediaLibraryConnectionAssertion *)libraryAssertion;
-(void)setLibraryAssertion:(MPMediaLibraryConnectionAssertion *)arg1 ;
@end

