/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXPeopleSuggestionManagerDataSource <NSObject>
@property (assign,nonatomic) unsigned long long initialPageLimit; 
@optional
-(void)startListeningForLibraryChanges;
-(void)stopListeningForLibraryChanges;
-(unsigned long long)initialPageLimit;
-(void)setInitialPageLimit:(unsigned long long)arg1;

@required
-(BOOL)cancelSuggestionForPerson:(id)arg1 withToken:(id)arg2 error:(id*)arg3;
-(id)suggestionsForPerson:(id)arg1 withConfirmedSuggestions:(id)arg2 andRejectedSuggestions:(id)arg3 completion:(/*^block*/id)arg4;
-(id)commitSuggestionsForPerson:(id)arg1 withConfirmedSuggestions:(id)arg2 andRejectedSuggestions:(id)arg3;

@end

