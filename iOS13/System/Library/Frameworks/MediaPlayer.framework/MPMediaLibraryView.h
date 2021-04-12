/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPMediaLibrary;

@interface MPMediaLibraryView : NSObject <NSCopying> {

	shared_ptr<mlcore::DeviceLibraryView>* _coreView;
	MPMediaLibrary* _library;
	unsigned long long _filteringOptions;

}

@property (nonatomic,readonly) shared_ptr<mlcore::DeviceLibraryView>* mlCoreView; 
@property (nonatomic,readonly) MPMediaLibrary * library;                                       //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) unsigned long long filteringOptions;                            //@synthesize filteringOptions=_filteringOptions - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPMediaLibrary *)library;
-(id)initWithLibrary:(id)arg1 filteringOptions:(unsigned long long)arg2 ;
-(BOOL)hasEntitiesForModelKind:(id)arg1 ;
-(shared_ptr<mlcore::DeviceLibraryView>*)mlCoreView;
-(void)performCoreQuery:(shared_ptr<mlcore::Query>*)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)performCoreSearchQuery:(shared_ptr<mlcore::LocalizedSearchQuery>*)arg1 withCompletion:(/*^block*/id)arg2 ;
-(shared_ptr<mlcore::QueryResult>*)_performCoreQuery:(shared_ptr<mlcore::Query>*)arg1 error:(id*)arg2 ;
-(unsigned long long)filteringOptions;
@end

