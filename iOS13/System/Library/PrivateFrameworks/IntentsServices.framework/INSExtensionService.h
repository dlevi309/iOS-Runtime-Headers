/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices
*/

#import <libobjc.A.dylib/INSAnalyticsObserver.h>
#import <libobjc.A.dylib/INSAnalyticsDataSource.h>
#import <libobjc.A.dylib/INSAppLaunchCommandDelegate.h>

@protocol OS_dispatch_queue, INSExtensionServiceDelegate;
@class NSObject, INCExtensionConnection, NSString, INExtensionContext, NSDictionary, NSArray;

@interface INSExtensionService : NSObject <INSAnalyticsObserver, INSAnalyticsDataSource, INSAppLaunchCommandDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _requestDelegateQueue;
	INCExtensionConnection* _currentConnection;
	NSString* _currentBundleIdForDisplay;
	INExtensionContext* _extensionContext;
	NSDictionary* _options;
	id<INSExtensionServiceDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSDictionary * options;                                //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<INSExtensionServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) INExtensionContext * extensionContext;                      //@synthesize extensionContext=_extensionContext - In the implementation block
@property (nonatomic,copy) NSArray * airPlayRouteIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * commandIdentifiers; 
@property (nonatomic,copy,readonly) NSString * groupIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSDictionary *)options;
-(id)initWithOptions:(id)arg1 ;
-(id<INSExtensionServiceDelegate>)delegate;
-(void)setDelegate:(id<INSExtensionServiceDelegate>)arg1 ;
-(NSString *)groupIdentifier;
-(INExtensionContext *)extensionContext;
-(id)_siriLanguageCode;
-(/*^block*/id)completionHandlerForAppLaunchCommand:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)analytics:(id)arg1 contextDictionaryForError:(id)arg2 ;
-(id)analytics:(id)arg1 contextDictionaryForCommand:(id)arg2 ;
-(void)analytics:(id)arg1 needsToLogEventWithType:(long long)arg2 context:(id)arg3 contextNoCopy:(BOOL)arg4 ;
-(NSArray *)commandIdentifiers;
-(void)handleCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetExternalResources;
-(void)setAirPlayRouteIdentifiers:(NSArray *)arg1 ;
-(NSArray *)airPlayRouteIdentifiers;
-(void)_extensionRequestWillStartForIntent:(id)arg1 ;
-(void)_extensionRequestDidFinishForIntent:(id)arg1 error:(id)arg2 ;
-(id)_extensionInputItems;
-(id)_updatedEventContextWithExtensionLoadType:(id)arg1 wasPrewarmed:(BOOL)arg2 ;
-(id)_connectionForIntent:(id)arg1 ;
-(BOOL)_prewarmExtensionWithIntent:(id)arg1 applicationIdentifier:(id)arg2 command:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_logPrewarmDidEndWithCommand:(id)arg1 applicationIdentifier:(id)arg2 wasPrewarmed:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(BOOL)arg3 ;
-(void)_requiresHandlingCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_shouldPrepareAudioSessionForCommand:(id)arg1 intent:(id)arg2 ;
@end

