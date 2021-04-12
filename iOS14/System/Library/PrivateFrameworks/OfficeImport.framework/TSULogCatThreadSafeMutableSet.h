/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface TSULogCatThreadSafeMutableSet : NSObject {

	NSMutableSet* _objects;
	NSObject*<OS_dispatch_queue> _logCatQueue;

}
-(id)init;
-(id)immutableSet;
-(unsigned long long)count;
-(BOOL)containsObject:(id)arg1 ;
-(id)allObjects;
-(id)description;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
@end

