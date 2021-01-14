/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXContextualMemoriesSettings, NSMutableArray;

@interface PXContextualMemoriesSettingsController : NSObject {

	BOOL _requestingUpdates;
	PXContextualMemoriesSettings* _settings;
	NSMutableArray* _completionHandlers;
	NSMutableArray* _registrationIdentifiers;

}

@property (nonatomic,readonly) PXContextualMemoriesSettings * settings;                      //@synthesize settings=_settings - In the implementation block
@property (assign,getter=isRequestingUpdates,nonatomic) BOOL requestingUpdates;              //@synthesize requestingUpdates=_requestingUpdates - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionHandlers;                            //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,retain) NSMutableArray * registrationIdentifiers;                       //@synthesize registrationIdentifiers=_registrationIdentifiers - In the implementation block
+(id)sharedController;
-(id)init;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(PXContextualMemoriesSettings *)settings;
-(NSMutableArray *)completionHandlers;
-(void)requestUpdatedContextualMemoriesSettingsWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerForLocationPrefetchingWithIdentifier:(id)arg1 ;
-(void)unregisterForLocationPrefetchingWithIdentifier:(id)arg1 ;
-(BOOL)isRequestingUpdates;
-(void)setRequestingUpdates:(BOOL)arg1 ;
-(NSMutableArray *)registrationIdentifiers;
-(void)setRegistrationIdentifiers:(NSMutableArray *)arg1 ;
@end

