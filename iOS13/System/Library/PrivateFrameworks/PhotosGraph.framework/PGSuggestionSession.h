/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol OS_os_log;
@class NSDate, PGManager, NSObject, NSArray, PGSuggestionNotificationProfile, PHPhotoLibrary;

@interface PGSuggestionSession : NSObject {

	NSDate* _universalToday;
	unsigned char _profile;
	PGManager* _graphManager;
	NSObject*<OS_os_log> _loggingConnection;
	NSArray* _existingSuggestions;
	NSArray* _existingMemories;
	PGSuggestionNotificationProfile* _notificationProfile;

}

@property (nonatomic,readonly) unsigned char profile;                                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) PGManager * graphManager;                                           //@synthesize graphManager=_graphManager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> loggingConnection;                             //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (nonatomic,retain) NSArray * existingSuggestions;                                        //@synthesize existingSuggestions=_existingSuggestions - In the implementation block
@property (nonatomic,retain) NSArray * existingMemories;                                           //@synthesize existingMemories=_existingMemories - In the implementation block
@property (nonatomic,readonly) PGSuggestionNotificationProfile * notificationProfile;              //@synthesize notificationProfile=_notificationProfile - In the implementation block
@property (nonatomic,readonly) NSArray * assetPropertySetsForCuration; 
+(id)suggestionTypesWithProfile:(unsigned char)arg1 ;
+(id)availableSuggestionTypeInfosWithProfile:(unsigned char)arg1 ;
+(id)suggesterClassesWithProfile:(unsigned char)arg1 ;
-(unsigned char)profile;
-(PHPhotoLibrary *)photoLibrary;
-(PGManager *)graphManager;
-(NSArray *)existingMemories;
-(void)setExistingMemories:(NSArray *)arg1 ;
-(NSArray *)existingSuggestions;
-(id)infosWithSuggestions:(id)arg1 ;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(void)setExistingSuggestions:(NSArray *)arg1 ;
-(id)initWithProfile:(unsigned char)arg1 graphManager:(id)arg2 ;
-(id)uncoordinatedSuggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)coordinatedSuggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(NSArray *)assetPropertySetsForCuration;
-(PGSuggestionNotificationProfile *)notificationProfile;
-(NSObject*<OS_os_log>)loggingConnection;
-(unsigned long long)reasonForSuggestion:(id)arg1 collidingWithSuggestion:(id)arg2 relaxCollisionRules:(BOOL)arg3 ;
-(unsigned long long)singleAssetSuggestion:(id)arg1 collidesWithSuggestion:(id)arg2 ;
-(unsigned long long)outstanderSuggestion:(id)arg1 collidesWithSuggestion:(id)arg2 relaxCollisionRules:(BOOL)arg3 ;
-(BOOL)supportsRelaxedCollisionRulesForSuggester:(id)arg1 ;
-(id)anySuggestionCollidingWithSuggestion:(id)arg1 inSuggestions:(id)arg2 relaxCollisionRules:(BOOL)arg3 collisionReason:(unsigned long long*)arg4 ;
-(id)suggestionsByCollisionReasonCollidingWithSuggestion:(id)arg1 inSuggestions:(id)arg2 relaxCollisionRules:(BOOL)arg3 ;
-(BOOL)suggestion:(id)arg1 collidesWithMemories:(id)arg2 ;
-(id)electedSuggestionsFromSuggestions:(id)arg1 options:(id)arg2 progress:(/*^block*/id)arg3 ;
-(id)bestSuggestionBetween:(id)arg1 and:(id)arg2 ;
-(id)suggesterClasses;
-(BOOL)suggesterClass:(Class)arg1 supportsOptions:(id)arg2 ;
-(id)activeSuggestersWithOptions:(id)arg1 ;
-(BOOL)suggestion:(id)arg1 isEqualToSuggestion:(id)arg2 ;
-(id)infoWithSuggestion:(id)arg1 ;
@end

