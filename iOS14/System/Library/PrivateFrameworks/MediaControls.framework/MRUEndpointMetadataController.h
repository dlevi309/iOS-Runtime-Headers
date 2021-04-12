/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControlsEndpointControllerDelegate.h>

@class MediaControlsEndpointController, MRUTVRemoteController, NSString, UIImage, NSHashTable, MPCPlayerCommandRequest, MPArtworkCatalog;

@interface MRUEndpointMetadataController : NSObject <MediaControlsEndpointControllerDelegate> {

	BOOL _showPlaceholderText;
	BOOL _showMediaSuggestions;
	MediaControlsEndpointController* _endpointController;
	MRUTVRemoteController* _tvRemoteController;
	NSString* _placeholderDeviceIdentifier;
	NSString* _undiscoveredPlaceholderText;
	UIImage* _applicationIcon;
	NSHashTable* _observers;
	MPCPlayerCommandRequest* _quickActionCommandRequest;
	UIImage* _quickActionCommandImage;
	NSString* _iconURL;
	long long _context;
	NSString* _suggestionContext;
	NSString* _quickActionCommandDescription;

}

@property (nonatomic,retain) NSHashTable * observers;                                             //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) MPCPlayerCommandRequest * quickActionCommandRequest;                 //@synthesize quickActionCommandRequest=_quickActionCommandRequest - In the implementation block
@property (nonatomic,retain) UIImage * quickActionCommandImage;                                   //@synthesize quickActionCommandImage=_quickActionCommandImage - In the implementation block
@property (nonatomic,retain) NSString * iconURL;                                                  //@synthesize iconURL=_iconURL - In the implementation block
@property (assign,nonatomic) long long context;                                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * suggestionContext;                                        //@synthesize suggestionContext=_suggestionContext - In the implementation block
@property (nonatomic,readonly) NSString * quickActionCommandDescription;                          //@synthesize quickActionCommandDescription=_quickActionCommandDescription - In the implementation block
@property (nonatomic,readonly) long long quickAction; 
@property (nonatomic,readonly) MediaControlsEndpointController * endpointController;              //@synthesize endpointController=_endpointController - In the implementation block
@property (nonatomic,readonly) MRUTVRemoteController * tvRemoteController;                        //@synthesize tvRemoteController=_tvRemoteController - In the implementation block
@property (nonatomic,copy,readonly) NSString * routeUID; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (nonatomic,readonly) BOOL isSystemMusicApplication; 
@property (nonatomic,copy) NSString * placeholderDeviceIdentifier;                                //@synthesize placeholderDeviceIdentifier=_placeholderDeviceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * condensedTitle; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * smallSubtitle; 
@property (nonatomic,copy,readonly) NSString * placeholderText; 
@property (nonatomic,copy) NSString * undiscoveredPlaceholderText;                                //@synthesize undiscoveredPlaceholderText=_undiscoveredPlaceholderText - In the implementation block
@property (assign,nonatomic) BOOL showPlaceholderText;                                            //@synthesize showPlaceholderText=_showPlaceholderText - In the implementation block
@property (nonatomic,readonly) UIImage * applicationIcon;                                         //@synthesize applicationIcon=_applicationIcon - In the implementation block
@property (nonatomic,readonly) UIImage * placeholderImage; 
@property (nonatomic,readonly) MPArtworkCatalog * artworkCatalog; 
@property (nonatomic,readonly) BOOL showMediaSuggestions;                                         //@synthesize showMediaSuggestions=_showMediaSuggestions - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowQuickAction; 
@property (nonatomic,readonly) UIImage * quickActionImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIconURL:(NSString *)arg1 ;
-(NSString *)routeUID;
-(void)addObserver:(id)arg1 ;
-(BOOL)isPlaying;
-(NSHashTable *)observers;
-(NSString *)placeholderText;
-(void)endpointControllerDidUpdateRoutingAvailability:(id)arg1 ;
-(NSString *)subtitle;
-(NSString *)placeholderDeviceIdentifier;
-(long long)context;
-(MediaControlsEndpointController *)endpointController;
-(BOOL)isSystemMusicApplication;
-(BOOL)isEndpointDiscovered;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)setPlaceholderDeviceIdentifier:(NSString *)arg1 ;
-(long long)quickAction;
-(UIImage *)applicationIcon;
-(void)removeObserver:(id)arg1 ;
-(UIImage *)placeholderImage;
-(void)endpointControllerDidChangeState:(id)arg1 ;
-(MPArtworkCatalog *)artworkCatalog;
-(void)endpointController:(id)arg1 didLoadNewResponse:(id)arg2 ;
-(void)endpointControllerRouteDidUpdate:(id)arg1 ;
-(NSString *)iconURL;
-(void)setApplicationIcon:(UIImage *)arg1 ;
-(id)destination;
-(NSString *)title;
-(void)setContext:(long long)arg1 ;
-(void)updateAutomaticResponseLoading;
-(void)performQuickAction;
-(NSString *)condensedTitle;
-(BOOL)showPlaceholderText;
-(void)setShowPlaceholderText:(BOOL)arg1 ;
-(BOOL)shouldShowQuickAction;
-(UIImage *)quickActionImage;
-(id)initWithEndpointController:(id)arg1 ;
-(BOOL)containsOutputDeviceWithRouteUID:(id)arg1 ;
-(NSString *)suggestionContext;
-(void)setSuggestionContext:(NSString *)arg1 ;
-(id)subtitleComponents;
-(void)trackQuickActionSelected;
-(void)updateShowMediaSuggestions;
-(void)setShowMediaSuggestions:(BOOL)arg1 ;
-(void)updateQuickActionCommandRequest;
-(void)updateApplicationIcon;
-(MRUTVRemoteController *)tvRemoteController;
-(id)representedBundleIDFromClient:(id)arg1 ;
-(NSString *)smallSubtitle;
-(void)setUndiscoveredPlaceholderText:(NSString *)arg1 ;
-(void)updateMediaSuggestions;
-(NSString *)undiscoveredPlaceholderText;
-(BOOL)showMediaSuggestions;
-(MPCPlayerCommandRequest *)quickActionCommandRequest;
-(void)setQuickActionCommandRequest:(MPCPlayerCommandRequest *)arg1 ;
-(UIImage *)quickActionCommandImage;
-(void)setQuickActionCommandImage:(UIImage *)arg1 ;
-(NSString *)quickActionCommandDescription;
@end

