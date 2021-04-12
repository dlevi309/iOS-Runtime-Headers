/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <libobjc.A.dylib/NSObservable.h>

@class NSString, _BRObservableFilePresenter;

@interface BRObservableFile : NSObject <NSObservable> {

	NSString* _key;
	_BRObservableFilePresenter* _presenter;

}

@property (nonatomic,copy) NSString * key;                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) _BRObservableFilePresenter * presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_applicationWillResignActive:(id)arg1 ;
+(void)_applicationDidBecomeActive:(id)arg1 ;
+(void)_registerInstance:(id)arg1 ;
+(id)observerForKey:(id)arg1 onFileURL:(id)arg2 ;
+(void)_registerForApplicationLifecycleNotifications;
+(void)_deregisterInstance:(id)arg1 ;
-(void)setPresenter:(_BRObservableFilePresenter *)arg1 ;
-(id)addObserverBlock:(/*^block*/id)arg1 ;
-(_BRObservableFilePresenter *)presenter;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithKey:(id)arg1 fileURL:(id)arg2 ;
-(void)_presenterDidChange;
@end

