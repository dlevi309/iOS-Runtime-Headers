/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@interface _SFNavigationIntentBuilder : NSObject {

	BOOL _prefersOpenInNewTab;
	BOOL _prefersOpenInNewWindow;
	BOOL _prefersRelationToSourceTab;
	long long _modifierFlags;
	long long _navigationType;
	long long _preferredTabOrder;

}

@property (nonatomic,readonly) long long modifierFlags;                    //@synthesize modifierFlags=_modifierFlags - In the implementation block
@property (assign,nonatomic) long long navigationType;                     //@synthesize navigationType=_navigationType - In the implementation block
@property (assign,nonatomic) long long preferredTabOrder;                  //@synthesize preferredTabOrder=_preferredTabOrder - In the implementation block
@property (assign,nonatomic) BOOL prefersOpenInNewTab;                     //@synthesize prefersOpenInNewTab=_prefersOpenInNewTab - In the implementation block
@property (assign,nonatomic) BOOL prefersOpenInNewWindow;                  //@synthesize prefersOpenInNewWindow=_prefersOpenInNewWindow - In the implementation block
@property (assign,nonatomic) BOOL prefersRelationToSourceTab;              //@synthesize prefersRelationToSourceTab=_prefersRelationToSourceTab - In the implementation block
+(BOOL)canCreateNavigationIntentForDropSession:(id)arg1 ;
+(id)builderWithModifierFlags:(long long)arg1 ;
+(id)builder;
+(void)registerBookmarkCollectionFactory:(/*^block*/id)arg1 ;
-(long long)navigationType;
-(void)setNavigationType:(long long)arg1 ;
-(long long)modifierFlags;
-(id)navigationIntentWithText:(id)arg1 ;
-(void)buildNavigationIntentForDropSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPrefersOpenInNewWindow:(BOOL)arg1 ;
-(id)navigationIntentWithURL:(id)arg1 ;
-(id)_initWithModifierFlags:(long long)arg1 ;
-(long long)_navigationPolicy;
-(id)_initializeNavigationIntentWithType:(unsigned long long)arg1 value:(id)arg2 ;
-(id)navigationIntentWithMultipleIntents:(id)arg1 ;
-(id)_navigationIntentWithItems:(id)arg1 ;
-(id)_navigationIntentForMKMapItem:(id)arg1 ;
-(BOOL)_hasModifierFlag:(long long)arg1 ;
-(id)navigationIntentWithRecentlyClosedTabStateData:(id)arg1 ;
-(long long)_navigationPolicyForStandardEvent;
-(long long)_navigationPolicyForNavigationEvent;
-(BOOL)_modifiersEqualToModifierIgnoringCapsLock:(long long)arg1 ;
-(long long)_navigationPolicyForCreatingNewTabOrWindow;
-(BOOL)_shouldOrderToForeground;
-(id)navigationIntentWithCloudTab:(id)arg1 ;
-(id)navigationIntentWithHistoryURL:(id)arg1 ;
-(id)navigationIntentWithSearchText:(id)arg1 ;
-(id)navigationIntentWithOpenURLContexts:(id)arg1 ;
-(long long)preferredTabOrder;
-(void)setPreferredTabOrder:(long long)arg1 ;
-(void)setPrefersOpenInNewTab:(BOOL)arg1 ;
-(id)navigationIntentWithBookmark:(id)arg1 ;
-(void)buildNavigationIntentForItemProviders:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)prefersOpenInNewTab;
-(BOOL)prefersOpenInNewWindow;
-(BOOL)prefersRelationToSourceTab;
-(void)setPrefersRelationToSourceTab:(BOOL)arg1 ;
@end

