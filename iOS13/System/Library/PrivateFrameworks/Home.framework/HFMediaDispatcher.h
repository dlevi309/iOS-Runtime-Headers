/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class ACAccountStore, NSArray, NSHashTable;

@interface HFMediaDispatcher : NSObject {

	ACAccountStore* _appleMusicAccountStore;
	NSArray* _appleMusicMagicAuthCapableAccounts;
	NSHashTable* _appleMusicAccountObservers;

}

@property (nonatomic,retain) NSHashTable * appleMusicAccountObservers;                //@synthesize appleMusicAccountObservers=_appleMusicAccountObservers - In the implementation block
@property (nonatomic,copy) NSArray * appleMusicMagicAuthCapableAccounts;              //@synthesize appleMusicMagicAuthCapableAccounts=_appleMusicMagicAuthCapableAccounts - In the implementation block
@property (nonatomic,readonly) ACAccountStore * appleMusicAccountStore;               //@synthesize appleMusicAccountStore=_appleMusicAccountStore - In the implementation block
@property (nonatomic,readonly) BOOL isUsingiCloud; 
+(id)sharedDispatcher;
-(id)init;
-(void)_setupAppleMusicAccountStoreIfNecessary;
-(NSHashTable *)appleMusicAccountObservers;
-(ACAccountStore *)appleMusicAccountStore;
-(NSArray *)appleMusicMagicAuthCapableAccounts;
-(void)setAppleMusicMagicAuthCapableAccounts:(NSArray *)arg1 ;
-(BOOL)_reloadAppleMusicMagicAuthCapableAccounts;
-(void)_accountsStoreWasUpdated:(id)arg1 ;
-(void)addAppleMusicAccountObserver:(id)arg1 ;
-(void)removeAppleMusicAccountObserver:(id)arg1 ;
-(BOOL)isUsingiCloud;
-(void)setAppleMusicAccountObservers:(NSHashTable *)arg1 ;
@end

