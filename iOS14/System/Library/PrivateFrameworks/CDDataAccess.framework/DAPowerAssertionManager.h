/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
*/


@class NSCountedSet, NSMapTable, NSMutableSet;

@interface DAPowerAssertionManager : NSObject {

	NSCountedSet* _contexts;
	NSMapTable* _groupIdentifierToContexts;
	NSMapTable* _contextToGroupIdentifier;
	NSMutableSet* _heldAsideGroupIdentifiers;
	NSCountedSet* _heldAsideContexts;
	NSMapTable* _contextToPowerAssertionRef;

}

@property (nonatomic,retain) NSCountedSet * contexts;                               //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,retain) NSMapTable * groupIdentifierToContexts;                //@synthesize groupIdentifierToContexts=_groupIdentifierToContexts - In the implementation block
@property (nonatomic,retain) NSMapTable * contextToGroupIdentifier;                 //@synthesize contextToGroupIdentifier=_contextToGroupIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableSet * heldAsideGroupIdentifiers;              //@synthesize heldAsideGroupIdentifiers=_heldAsideGroupIdentifiers - In the implementation block
@property (nonatomic,retain) NSCountedSet * heldAsideContexts;                      //@synthesize heldAsideContexts=_heldAsideContexts - In the implementation block
@property (nonatomic,retain) NSMapTable * contextToPowerAssertionRef;               //@synthesize contextToPowerAssertionRef=_contextToPowerAssertionRef - In the implementation block
+(id)sharedPowerAssertionManager;
+(void)vendDaemons:(Class)arg1 ;
-(id)init;
-(id)stateString;
-(void)dropPowerAssertionsForGroupIdentifier:(id)arg1 ;
-(void)reattainPowerAssertionsForGroupIdentifier:(id)arg1 ;
-(void)setContexts:(NSCountedSet *)arg1 ;
-(void)retainPowerAssertion:(id)arg1 withGroupIdentifier:(id)arg2 ;
-(NSCountedSet *)contexts;
-(void)setGroupIdentifierToContexts:(NSMapTable *)arg1 ;
-(void)setContextToGroupIdentifier:(NSMapTable *)arg1 ;
-(void)setHeldAsideContexts:(NSCountedSet *)arg1 ;
-(void)setHeldAsideGroupIdentifiers:(NSMutableSet *)arg1 ;
-(void)setContextToPowerAssertionRef:(NSMapTable *)arg1 ;
-(NSCountedSet *)heldAsideContexts;
-(NSMutableSet *)heldAsideGroupIdentifiers;
-(NSMapTable *)groupIdentifierToContexts;
-(NSMapTable *)contextToGroupIdentifier;
-(BOOL)_retainAssertionForContext:(id)arg1 ;
-(BOOL)_releaseAssertionForContext:(id)arg1 ;
-(NSMapTable *)contextToPowerAssertionRef;
-(unsigned long long)powerAssertionRetainCount:(id)arg1 ;
-(void)releasePowerAssertion:(id)arg1 ;
@end

