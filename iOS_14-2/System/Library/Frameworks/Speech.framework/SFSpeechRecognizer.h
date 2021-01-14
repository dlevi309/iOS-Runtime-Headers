/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
*/

#import <libobjc.A.dylib/CXCallObserverDelegate.h>
#import <libobjc.A.dylib/AFDictationDelegate.h>

@protocol NSObject, SFSpeechRecognizerDelegate;
@class AFDictationConnection, NSString, CXCallObserver, NSLocale, NSOperationQueue;

@interface SFSpeechRecognizer : NSObject <CXCallObserverDelegate, AFDictationDelegate> {

	AFDictationConnection* _dictationConnection;
	NSString* _languageCode;
	CXCallObserver* _callObserver;
	id<NSObject> _facetimeObserver;
	id<NSObject> _foregroundObserver;
	id<NSObject> _preferencesObserver;
	BOOL _supportsOnDeviceRecognition;
	NSLocale* _locale;
	id<SFSpeechRecognizerDelegate> _delegate;
	long long _defaultTaskHint;
	NSOperationQueue* _queue;

}

@property (getter=_isAvailableForForcedOfflineRecognition,nonatomic,readonly) BOOL _availableForForcedOfflineRecognition; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (nonatomic,copy,readonly) NSLocale * locale;                                                                                 //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) BOOL supportsOnDeviceRecognition;                                                                         //@synthesize supportsOnDeviceRecognition=_supportsOnDeviceRecognition - In the implementation block
@property (assign,nonatomic,__weak) id<SFSpeechRecognizerDelegate> delegate;                                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long defaultTaskHint;                                                                                //@synthesize defaultTaskHint=_defaultTaskHint - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                                                                                 //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)requestAuthorization:(/*^block*/id)arg1 ;
+(long long)authorizationStatus;
+(id)supportedLocales;
+(void)_fetchSupportedForcedOfflineLocalesWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithLocale:(id)arg1 ;
-(BOOL)isAvailable;
-(NSLocale *)locale;
-(id)init;
-(id<SFSpeechRecognizerDelegate>)delegate;
-(void)setSupportsOnDeviceRecognition:(BOOL)arg1 ;
-(id)recognitionTaskWithRequest:(id)arg1 delegate:(id)arg2 ;
-(void)setDelegate:(id<SFSpeechRecognizerDelegate>)arg1 ;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(BOOL)supportsOnDeviceRecognition;
-(id)recognitionTaskWithRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)setDefaultTaskHint:(long long)arg1 ;
-(BOOL)_isAvailableForForcedOfflineRecognition;
-(void)_requestOfflineDictationSupportWithCompletion:(/*^block*/id)arg1 ;
-(NSOperationQueue *)queue;
-(BOOL)_isInternalTaskHint:(long long)arg1 ;
-(void)_informDelegateOfAvailabilityChange;
-(void)_informDelegateOfPreferencesChange;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(void)dictationConnnectionDidChangeAvailability:(id)arg1 ;
-(void)dealloc;
-(long long)defaultTaskHint;
@end

