/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@protocol PKCancelable;
@class SSSoftwareLibraryItem, AMSLookupItem, NSHashTable, SKStoreProductViewController, NSArray, NSURL, UIImage, NSString, NSNumber;

@interface PKLinkedApplication : NSObject <SKStoreProductViewControllerDelegate> {

	SSSoftwareLibraryItem* _foundLibraryItem;
	AMSLookupItem* _foundStoreItem;
	os_unfair_lock_s _pendingLock;
	id<PKCancelable> _pendingUpdate;
	BOOL _loaded;
	BOOL _loading;
	NSHashTable* _observers;
	SKStoreProductViewController* _presentedViewController;
	BOOL _useSmallIcon;
	NSArray* _storeIDs;
	NSURL* _defaultLaunchURL;
	UIImage* _iconImage;

}

@property (nonatomic,copy) NSArray * storeIDs;                                 //@synthesize storeIDs=_storeIDs - In the implementation block
@property (nonatomic,copy) NSURL * defaultLaunchURL;                           //@synthesize defaultLaunchURL=_defaultLaunchURL - In the implementation block
@property (assign,nonatomic) BOOL useSmallIcon;                                //@synthesize useSmallIcon=_useSmallIcon - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (getter=isInstalled,nonatomic,readonly) BOOL installed; 
@property (nonatomic,readonly) CGSize expectedIconSize; 
@property (nonatomic,readonly) UIImage * iconImage;                            //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * publisher; 
@property (nonatomic,readonly) NSNumber * averageRating; 
@property (nonatomic,readonly) NSString * price; 
@property (nonatomic,readonly) NSNumber * storeIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_openOptionsWithURL:(id)arg1 ;
-(NSString *)publisher;
-(NSString *)price;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(id)initWithStoreIDs:(id)arg1 defaultLaunchURL:(id)arg2 ;
-(void)reloadApplicationStateIfNecessary;
-(NSArray *)storeIDs;
-(UIImage *)iconImage;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(BOOL)isInstalled;
-(NSString *)name;
-(void)removeObserver:(id)arg1 ;
-(void)openApplication:(id)arg1 ;
-(void)installedApplicationsDidChangeNotification:(id)arg1 ;
-(void)_notifyObserversOfStateChange;
-(void)_updateApplicationStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_reloadApplicationState;
-(void)openApplication:(id)arg1 withLaunchOptions:(unsigned long long)arg2 ;
-(void)openApplication:(id)arg1 withLaunchOptions:(unsigned long long)arg2 launchURL:(id)arg3 ;
-(id)_iconImageDescriptorForScale:(double)arg1 ;
-(BOOL)_useLibraryItem;
-(void)_unloadApplicationState;
-(CGSize)expectedIconSize;
-(NSNumber *)averageRating;
-(NSURL *)defaultLaunchURL;
-(void)setDefaultLaunchURL:(NSURL *)arg1 ;
-(BOOL)useSmallIcon;
-(long long)state;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(id)initWithPass:(id)arg1 ;
-(NSNumber *)storeIdentifier;
-(void)setUseSmallIcon:(BOOL)arg1 ;
-(void)dealloc;
@end

