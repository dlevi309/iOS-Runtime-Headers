/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EFLoggable.h>

@protocol EFObserver;
@class EFObservable, EMRemoteConnection, NSString;

@interface EMClientState : NSObject <EFLoggable> {

	BOOL _isForeground;
	BOOL _isRunningTests;
	EFObservable*<EFObserver> _foregroundObservable;
	EMRemoteConnection* _connection;

}

@property (retain) EMRemoteConnection * connection;                                       //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL isForeground;                                           //@synthesize isForeground=_isForeground - In the implementation block
@property (nonatomic,retain) EFObservable*<EFObserver> foregroundObservable;              //@synthesize foregroundObservable=_foregroundObservable - In the implementation block
@property (assign,nonatomic) BOOL isRunningTests;                                         //@synthesize isRunningTests=_isRunningTests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)remoteInterface;
-(id)initWithRemoteConnection:(id)arg1 ;
-(void)setIsRunningTests:(BOOL)arg1 ;
-(void)setCurrentlyVisibleMailboxes:(id)arg1 ;
-(void)_performAsyncUpdate:(/*^block*/id)arg1 ;
-(void)_handleApplicationWillEnterForeground;
-(void)setIsForeground:(BOOL)arg1 ;
-(BOOL)isRunningTests;
-(BOOL)isForeground;
-(EFObservable*<EFObserver>)foregroundObservable;
-(id)daemonBoosterWithDescription:(id)arg1 ;
-(void)_handleApplicationDidEnterBackground;
-(EMRemoteConnection *)connection;
-(void)setForegroundObservable:(EFObservable*<EFObserver>)arg1 ;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
@end

