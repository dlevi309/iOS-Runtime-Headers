/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@protocol OS_dispatch_queue;
@class NSDictionary, MRMediaSuggestionRequest, NSHashTable, NSCache, NSObject, MRMediaSuggestionPreferences;

@interface MRUMediaSuggestionsController : NSObject {

	BOOL _requestActive;
	NSDictionary* _suggestions;
	MRMediaSuggestionRequest* _request;
	NSHashTable* _observers;
	NSCache* _imageCache;
	NSObject*<OS_dispatch_queue> _requestQueue;
	MRMediaSuggestionPreferences* _preferences;

}

@property (nonatomic,retain) NSDictionary * suggestions;                              //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,retain) MRMediaSuggestionRequest * request;                      //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSCache * imageCache;                                    //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;               //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,retain) MRMediaSuggestionPreferences * preferences;              //@synthesize preferences=_preferences - In the implementation block
@property (assign,nonatomic) BOOL requestActive;                                      //@synthesize requestActive=_requestActive - In the implementation block
+(id)sharedController;
-(NSDictionary *)suggestions;
-(void)setSuggestions:(NSDictionary *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(NSHashTable *)observers;
-(id)init;
-(void)setRequest:(MRMediaSuggestionRequest *)arg1 ;
-(MRMediaSuggestionPreferences *)preferences;
-(void)setPreferences:(MRMediaSuggestionPreferences *)arg1 ;
-(MRMediaSuggestionRequest *)request;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSCache *)imageCache;
-(void)setImageCache:(NSCache *)arg1 ;
-(void)requestNewSuggestionsWithCompletion:(/*^block*/id)arg1 ;
-(void)notifySuggestionsDidChange:(id)arg1 ;
-(id)artworkImageForSuggestion:(id)arg1 ;
-(void)hasTimeOutElapsedForOrigin:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)suggestionsForContext:(id)arg1 ;
-(BOOL)requestActive;
-(void)setRequestActive:(BOOL)arg1 ;
@end

