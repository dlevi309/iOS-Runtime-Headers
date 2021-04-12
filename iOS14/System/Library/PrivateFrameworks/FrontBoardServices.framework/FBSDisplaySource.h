/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue;
@class CADisplay, NSObject, BSAtomicSignal, FBSDisplayMonitor, FBSDisplayConfiguration, NSString;

@interface FBSDisplaySource : NSObject <BSInvalidatable, BSDescriptionProviding> {

	CADisplay* _display;
	BOOL _isMain;
	unsigned _displayID;
	unsigned _instanceID;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	BOOL _observing;
	BOOL _initialized;
	BSAtomicSignal* _invalidated;
	os_unfair_lock_s _lock;
	FBSDisplayMonitor* _lock_monitor;
	FBSDisplayConfiguration* _lock_configuration;
	BOOL _lock_allowsUnknown;
	int _lock_attachment;
	unsigned _lock_debounceToken;
	FBSDisplayConfiguration* _lock_reportedConfiguration;
	os_unfair_lock_s _externallyVisibleLock;
	int _evlock_attachment;
	FBSDisplayConfiguration* _evlock_configuration;
	FBSDisplayConfiguration* _evlock_reportedConfiguration;

}

@property (nonatomic,readonly) unsigned displayID;                                                 //@synthesize displayID=_displayID - In the implementation block
@property (assign,nonatomic) BOOL allowsUnknown; 
@property (nonatomic,copy,readonly) FBSDisplayConfiguration * connectedConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(void)_lock_noteConnected;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_lock_noteUpdated;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)debugDescription;
-(id)initWithNonMainDisplay:(id)arg1 monitor:(id)arg2 ;
-(void)_lock_setAttachment:(int)arg1 ;
-(NSString *)description;
-(id)_lock_setReportedConfiguration:(id)arg1 ;
-(unsigned)displayID;
-(FBSDisplayConfiguration *)connectedConfiguration;
-(void)setAllowsUnknown:(BOOL)arg1 ;
-(void)_lock_update;
-(void)_lock_setConfiguration:(id)arg1 ;
-(void)invalidate;
-(id)_initWithDisplay:(id)arg1 monitor:(id)arg2 isMain:(BOOL)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)allowsUnknown;
-(id)initWithMainDisplay:(id)arg1 monitor:(id)arg2 ;
-(void)_lock_noteDisconnecting;
-(void)dealloc;
@end

