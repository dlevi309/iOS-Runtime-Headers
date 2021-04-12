/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TIKeyboardActivityObserving.h>
#import <libobjc.A.dylib/TIUserDictionaryServing.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSObject, NSMutableArray, NSArray, _KSTextReplacementServer, NSString;

@interface TIUserDictionaryServer : NSObject <TIKeyboardActivityObserving, TIUserDictionaryServing> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _observers;
	NSArray* _cache;
	BOOL _updating;
	int _pendingUpdates;
	unsigned long long _keyboardActivityState;
	long long _recentClientCount;
	NSUUID* _userDictionaryUUID;
	_KSTextReplacementServer* _textReplacementServer;

}

@property (nonatomic,copy) NSUUID * userDictionaryUUID;                                     //@synthesize userDictionaryUUID=_userDictionaryUUID - In the implementation block
@property (nonatomic,retain) _KSTextReplacementServer * textReplacementServer;              //@synthesize textReplacementServer=_textReplacementServer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)singletonInstance;
+(double)decrementClientDelay;
+(void)setSharedInstance:(id)arg1 ;
-(void)resetCache;
-(id)addObserver:(/*^block*/id)arg1 ;
-(void)setTextReplacementServer:(_KSTextReplacementServer *)arg1 ;
-(id)init;
-(void)setUserDictionaryUUID:(NSUUID *)arg1 ;
-(void)getPhraseShortcutPairs:(/*^block*/id)arg1 ;
-(void)decrementRecentClientCountAfterDelay;
-(void)managedKeyboardSettingsDidChange:(id)arg1 ;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(NSUUID *)userDictionaryUUID;
-(void)updateCache;
-(void)startServer;
-(void)loadPhraseShortcutPairs:(/*^block*/id)arg1 ;
-(void)incrementRecentClientCount;
-(void)removeObserver:(id)arg1 ;
-(_KSTextReplacementServer *)textReplacementServer;
-(void)handleIdleTimeout;
-(void)dealloc;
@end

