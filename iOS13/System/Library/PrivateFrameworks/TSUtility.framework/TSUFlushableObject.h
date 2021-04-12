/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUFlushable.h>

@protocol NSLocking;
@class TSUFlushingManager, NSObject, NSString;

@interface TSUFlushableObject : NSObject <TSUFlushable> {

	int _retainCount;
	int _ownerCount;
	TSUFlushingManager* _flushingManager;
	NSObject*<NSLocking> _flushingManagerIvarLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(void)unload;
-(void)flush;
-(id)ownerAutoreleasedAccess;
-(BOOL)hasFlushableContent;
-(void)addOwner;
-(void)ownerWillAccess;
-(void)ownerDidAccess;
-(id)ownerRetain;
-(void)ownerRelease;
@end

