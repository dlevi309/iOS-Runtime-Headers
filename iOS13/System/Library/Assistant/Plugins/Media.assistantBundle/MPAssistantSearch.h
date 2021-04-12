/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
*/

#import <SAObjects/SAMPSearch.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString, ICUserIdentity;

@interface MPAssistantSearch : SAMPSearch <AFServiceCommand> {

	NSString* _requestAceHash;
	ICUserIdentity* _userIdentity;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_prepare;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)_perform;
-(id)_playlistsByDateCreatedOrder:(id)arg1 ;
-(id)_songCollectionsWithGroupingType:(long long)arg1 searchString:(id)arg2 mediaTypes:(long long)arg3 ;
-(id)_itemsByTitle:(id)arg1 mediaTypes:(long long)arg2 ;
-(id)_playlistsByName:(id)arg1 isGeniusMix:(BOOL)arg2 ;
-(id)_audiobooksByName:(id)arg1 ;
-(id)_stationDictionariesWithParent:(unsigned long long)arg1 ;
-(id)_stationDictionaryForGenreName:(id)arg1 parent:(unsigned long long)arg2 ;
-(id)_stationWithName:(id)arg1 ;
-(id)_stationDictionaryForGenreName:(id)arg1 ;
@end

