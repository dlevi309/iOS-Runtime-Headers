/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/HIDPlugins/IOHIDKeyboardFilter.plugin/IOHIDKeyboardFilter
*/


@class NSMutableSet;

@interface AppleKeyboardStateManager : NSObject {

	NSMutableSet* _capsLockStateTable;

}

@property (nonatomic,retain) NSMutableSet * capsLockStateTable;              //@synthesize capsLockStateTable=_capsLockStateTable - In the implementation block
+(id)sharedManager;
-(id)init;
-(BOOL)isCapsLockEnabled:(id)arg1 ;
-(void)setCapsLockEnabled:(BOOL)arg1 locationID:(id)arg2 ;
-(NSMutableSet *)capsLockStateTable;
-(void)setCapsLockStateTable:(NSMutableSet *)arg1 ;
@end

