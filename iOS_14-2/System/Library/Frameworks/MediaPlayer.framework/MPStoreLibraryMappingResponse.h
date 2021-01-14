/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSMutableDictionary;

@interface MPStoreLibraryMappingResponse : NSObject {

	NSMutableDictionary* _storeIdentifierSetToLibraryIdentifierSet;
	long long _libraryAddedStatus;

}

@property (assign,nonatomic) long long libraryAddedStatus;              //@synthesize libraryAddedStatus=_libraryAddedStatus - In the implementation block
-(long long)libraryAddedStatus;
-(id)libraryIdentifierSetForIdentifierSet:(id)arg1 ;
-(void)setLibraryIdentifierSet:(id)arg1 forIdentifierSet:(id)arg2 ;
-(void)setLibraryAddedStatus:(long long)arg1 ;
@end

