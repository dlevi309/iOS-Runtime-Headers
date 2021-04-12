/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSMutableDictionary;

@interface MPStoreLibraryMappingResponse : NSObject {

	NSMutableDictionary* _storeIdentifierSetToLibraryIdentifierSet;
	long long _libraryAddedStatus;

}

@property (assign,nonatomic) long long libraryAddedStatus;              //@synthesize libraryAddedStatus=_libraryAddedStatus - In the implementation block
-(id)libraryIdentifierSetForIdentifierSet:(id)arg1 ;
-(void)setLibraryIdentifierSet:(id)arg1 forIdentifierSet:(id)arg2 ;
-(long long)libraryAddedStatus;
-(void)setLibraryAddedStatus:(long long)arg1 ;
@end

