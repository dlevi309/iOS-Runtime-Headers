/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface TSULogCatThreadSafeMutableSet : NSObject {

	NSMutableSet* _objects;
	NSObject*<OS_dispatch_queue> _logCatQueue;

}
-(id)init;
-(id)description;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)allObjects;
-(id)immutableSet;
@end

