/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/


@protocol DOCKeyboardFocusable;
@class NSPointerArray;

@interface DOCKeyboardFocusManager : NSObject {

	id<DOCKeyboardFocusable> _currentlyFocused;
	NSPointerArray* _allKeyboardFocusable;

}

@property (retain) NSPointerArray * allKeyboardFocusable;              //@synthesize allKeyboardFocusable=_allKeyboardFocusable - In the implementation block
+(id)sharedManager;
+(id)directionalKeyCommandsWithAction:(SEL)arg1 ;
+(BOOL)isCustomKeyboardFocusEnabled;
-(id)init;
-(id)currentlyFocused;
-(BOOL)restoreCurrentlyFocused;
-(void)registerKeyboardFocusable:(id)arg1 ;
-(BOOL)requestCurrentFocus:(id)arg1 ;
-(void)unregisterKeyboardFocusable:(id)arg1 ;
-(id)adjacentFocusableToFocusable:(id)arg1 direction:(long long)arg2 ;
-(void)_printAllRegisteredFocusable;
-(BOOL)_isRegistered:(id)arg1 ;
-(NSPointerArray *)allKeyboardFocusable;
-(void)setAllKeyboardFocusable:(NSPointerArray *)arg1 ;
@end

