/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)setSharedInstance:(id)arg1 ;
+(id)singletonInstance;
+(double)decrementClientDelay;
-(id)init;
-(void)dealloc;
-(id)addObserver:(/*^block*/id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)resetCache;
-(void)updateCache;
-(void)startServer;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(NSUUID *)userDictionaryUUID;
-(void)setUserDictionaryUUID:(NSUUID *)arg1 ;
-(void)getPhraseShortcutPairs:(/*^block*/id)arg1 ;
-(void)loadPhraseShortcutPairs:(/*^block*/id)arg1 ;
-(void)managedKeyboardSettingsDidChange:(id)arg1 ;
-(void)incrementRecentClientCount;
-(void)decrementRecentClientCountAfterDelay;
-(void)handleIdleTimeout;
-(_KSTextReplacementServer *)textReplacementServer;
-(void)setTextReplacementServer:(_KSTextReplacementServer *)arg1 ;
@end

