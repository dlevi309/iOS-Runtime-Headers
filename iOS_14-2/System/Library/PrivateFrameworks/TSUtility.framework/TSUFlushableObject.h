/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)flush;
-(void)unload;
-(oneway void)release;
-(id)init;
-(id)retain;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)ownerAutoreleasedAccess;
-(BOOL)hasFlushableContent;
-(void)addOwner;
-(void)ownerWillAccess;
-(void)ownerDidAccess;
-(id)ownerRetain;
-(void)ownerRelease;
@end

