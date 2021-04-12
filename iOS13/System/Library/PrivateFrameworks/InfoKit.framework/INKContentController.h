/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InfoKit.framework/InfoKit
*/

#import <libobjc.A.dylib/INKContentViewDelegate.h>
#import <libobjc.A.dylib/INKTipContentHintViewDelegate.h>
#import <libobjc.A.dylib/TPSEventsProviderDelegate.h>
#import <libobjc.A.dylib/_TPSXPCExportable.h>

@protocol OS_dispatch_queue;
@class NSDate, NSArray, NSObject, TPSDuetEventsProvider, INKContent, NSString, NSHashTable, _TPSXPCConnection;

@interface INKContentController : NSObject <INKContentViewDelegate, INKTipContentHintViewDelegate, TPSEventsProviderDelegate, _TPSXPCExportable> {

	BOOL _contentOnScreen;
	BOOL _enterForegroundNotificationRegistered;
	BOOL _allowsOverrides;
	BOOL _userPerformedDesiredOutcome;
	BOOL _userPerformedContentDesiredOutcome;
	BOOL _displayTestContent;
	NSDate* _nextAllowedCheckDate;
	NSDate* _lastContentValidateDate;
	NSArray* _currentContext;
	NSObject*<OS_dispatch_queue> _checkQueue;
	TPSDuetEventsProvider* _duetEventsProvider;
	BOOL _contentDismissedByUser;
	long long _state;
	INKContent* _content;
	NSString* _context;
	NSHashTable* _observers;
	NSString* __contentTitle;
	NSString* __contentText;
	_TPSXPCConnection* _discoverabilityXPCConnection;

}

@property (assign,nonatomic) long long state;                                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) INKContent * content;                                                              //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSString * context;                                                                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                           //@synthesize observers=_observers - In the implementation block
@property (setter=_setContentTitle:,getter=_contentTitle,nonatomic,copy) NSString * _contentTitle;              //@synthesize _contentTitle=__contentTitle - In the implementation block
@property (setter=_setContentText:,getter=_contentText,nonatomic,copy) NSString * _contentText;                 //@synthesize _contentText=__contentText - In the implementation block
@property (nonatomic,retain) _TPSXPCConnection * discoverabilityXPCConnection;                                  //@synthesize discoverabilityXPCConnection=_discoverabilityXPCConnection - In the implementation block
@property (nonatomic,readonly) BOOL contentDismissedByUser;                                                     //@synthesize contentDismissedByUser=_contentDismissedByUser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_identifierForContext:(id)arg1 ;
-(void)dealloc;
-(long long)state;
-(NSString *)context;
-(id)exportedInterface;
-(void)setState:(long long)arg1 ;
-(void)setContext:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(NSString *)_contentText;
-(INKContent *)content;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)setContent:(INKContent *)arg1 ;
-(void)connectionInvalidated;
-(id)createContentViewWithContent:(id)arg1 ;
-(BOOL)contentDismissedByUser;
-(void)removeObserver:(id)arg1 content:(id)arg2 ;
-(void)addObserver:(id)arg1 content:(id)arg2 ;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(void)_destroyXPCConnection;
-(NSString *)_contentTitle;
-(void)applicationWillEnterForeground;
-(void)dataProvider:(id)arg1 didFinishQueryWithResults:(id)arg2 ;
-(void)dataProvider:(id)arg1 didReceiveCallbackWithResult:(id)arg2 ;
-(void)_contentViewWillBeShown:(id)arg1 ;
-(void)unregisterEnterForegroundNotification;
-(id)_cachedContent;
-(void)notifyObserver:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(BOOL)arg3 ;
-(void)notifyObserver:(id)arg1 didFinishWithContent:(id)arg2 animated:(BOOL)arg3 ;
-(void)checkForContent;
-(void)_contentDidDisplay:(id)arg1 ;
-(BOOL)_isCacheContentValidForBundleID:(id)arg1 ;
-(void)_clearCachedContent;
-(void)_registerCallbackForDismissalEvents:(id)arg1 ;
-(void)showTestContent;
-(void)checkForContentForBundleID:(id)arg1 ;
-(_TPSXPCConnection *)discoverabilityXPCConnection;
-(void)_updateCachedContent:(id)arg1 ;
-(void)_deregisterCallbackForDismissalEvents:(id)arg1 ;
-(void)_contentDidDismiss:(id)arg1 ;
-(id)duetEventsFromDeliveryEvents:(id)arg1 ;
-(void)_tipContentHintViewCloseButtonTapped:(id)arg1 ;
-(void)_tipContentHintView:(id)arg1 actionTapped:(id)arg2 ;
-(void)_tipContentHintView:(id)arg1 viewTappedForIdentifier:(id)arg2 ;
-(void)_tipContentHintViewContentViewNeedsLayout:(id)arg1 reason:(unsigned long long)arg2 ;
-(id)_tipContentHintView:(id)arg1 iconForCustomizationID:(long long)arg2 ;
-(id)contentViewWithContent:(id)arg1 ;
-(void)_setContentTitle:(id)arg1 ;
-(void)_setContentText:(id)arg1 ;
-(void)setDiscoverabilityXPCConnection:(_TPSXPCConnection *)arg1 ;
@end

