/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSHashTable, NSUUID, NSString;

@interface HFStateRestorationSettings : NSObject {

	int _notifyRegistrationToken;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) int notifyRegistrationToken;                                      //@synthesize notifyRegistrationToken=_notifyRegistrationToken - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,copy) NSUUID * selectedHomeIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * selectedRoomIdentifierForSelectedHome; 
@property (nonatomic,copy) NSString * selectedHomeAppTabIdentifier; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id)selectedRoomIdentifierForHomeIdentifier:(id)arg1 ;
-(NSUUID *)selectedRoomIdentifierForSelectedHome;
-(void)saveSelectedRoomIdentifier:(id)arg1 forHomeIdentifier:(id)arg2 ;
-(void)_selectedHomeDidChange;
-(int)notifyRegistrationToken;
-(NSUUID *)selectedHomeIdentifier;
-(id)_roomKeyForHomeIdentifier:(id)arg1 ;
-(id)_homeAppPreferencesValueForKey:(id)arg1 ofClass:(Class)arg2 ;
-(void)_setHomeAppPreferencesValue:(id)arg1 forKey:(id)arg2 ;
-(void)setSelectedHomeIdentifier:(NSUUID *)arg1 ;
-(NSString *)selectedHomeAppTabIdentifier;
-(void)setSelectedHomeAppTabIdentifier:(NSString *)arg1 ;
-(void)syncToNanoPrefs;
@end

