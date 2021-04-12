/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/BBObserverDelegate.h>

@protocol SASBulletinManagerDelegate;
@class BBObserver, SASBulletinCache, NSMutableDictionary, NSString;

@interface SASBulletinManager : NSObject <BBObserverDelegate> {

	BBObserver* _observer;
	SASBulletinCache* _bulletinCache;
	NSMutableDictionary* _bulletinsOnLockScreen;
	id<SASBulletinManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SASBulletinManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<SASBulletinManagerDelegate>)delegate;
-(void)setDelegate:(id<SASBulletinManagerDelegate>)arg1 ;
-(void)_setupObserver;
-(id)_displayNameForBulletin:(id)arg1 ;
-(void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2 ;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2 ;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(id)bulletinsOnLockScreen;
-(id)allBulletins;
-(id)bulletinForIdentifier:(id)arg1 ;
-(void)markBulletinWithIdentifier:(id)arg1 asRead:(BOOL)arg2 ;
-(void)_bulletinsDidChange;
-(void)addBulletinCompletionWithBulletin:(id)arg1 forFeed:(unsigned long long)arg2 ;
-(void)modifyBulletinCompletionWithBulletin:(id)arg1 ;
@end

