/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUOneUpSuggestionsProvider.h>

@class PUOneUpAccessoryViewControllersManager;

@interface PUOneUpDetailsEducationalCardSuggestionsProvider : PUOneUpSuggestionsProvider {

	PUOneUpAccessoryViewControllersManager* _accessoryViewControllersManager;

}

@property (nonatomic,readonly) PUOneUpAccessoryViewControllersManager * accessoryViewControllersManager;              //@synthesize accessoryViewControllersManager=_accessoryViewControllersManager - In the implementation block
+(BOOL)didDisplayEducationalCard;
+(void)setDidDisplayEducationalCard:(BOOL)arg1 ;
+(id)_userDefaults;
-(id)init;
-(PUOneUpAccessoryViewControllersManager *)accessoryViewControllersManager;
-(id)initWithAccessoryViewControllersManager:(id)arg1 ;
-(id)requestSuggestionForAsset:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(BOOL)canProvideSuggestionForAsset:(id)arg1 ;
@end

