/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol OS_dispatch_queue, _SFPasswordIconControllerDelegate;
#import <SafariServices/SafariServices-Structs.h>
@class WBSCache, NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject, _SFSiteMetadataManager;

@interface _SFPasswordIconController : NSObject {

	WBSCache* _iconCache;
	NSMutableDictionary* _domainsToExtractedBackgroundColors;
	NSMutableSet* _touchIconRequests;
	NSMutableDictionary* _domainToItems;
	NSMutableSet* _domainsThatHaveRequestedIcon;
	NSMutableArray* _blocksAwaitingHistoryItems;
	NSObject*<OS_dispatch_queue> _queue;
	_SFSiteMetadataManager* _metadataManager;
	NSMutableDictionary* _domainToAppID;
	NSMutableArray* _blocksAwaitingSharedWebCredentialsInformation;
	BOOL _initializedHistory;
	id<_SFPasswordIconControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFPasswordIconControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CGSize)preferredIconSize;
-(id<_SFPasswordIconControllerDelegate>)delegate;
-(void)setDelegate:(id<_SFPasswordIconControllerDelegate>)arg1 ;
-(id)initWithMetadataManager:(id)arg1 ;
-(void)clearIconFetchingState;
-(id)iconForDomain:(id)arg1 ;
-(id)backgroundColorForDomain:(id)arg1 ;
-(void)_fetchTouchIconForDomain:(id)arg1 ;
-(void)_requestTouchIconForDomain:(id)arg1 iconDownloadingEnabled:(BOOL)arg2 ;
-(void)_checkForLocalVisitToDomain:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_populateDomainToItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchAppIconForDomain:(id)arg1 ;
-(void)_iconDidUpdateForDomain:(id)arg1 ;
-(void)_populateDomainToAppIDWithCompletion:(/*^block*/id)arg1 ;
@end

