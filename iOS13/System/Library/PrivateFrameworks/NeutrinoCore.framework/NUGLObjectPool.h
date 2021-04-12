/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue;
#import <NeutrinoCore/NeutrinoCore-Structs.h>
@class NSObject, NSHashTable;

@interface NUGLObjectPool : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	map<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > >, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > > > >* _objects;
	NSHashTable* _contexts;

}

@property (readonly) BOOL isUsed; 
@property (readonly) long long objectCount; 
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithContext:(id)arg1 ;
-(long long)useCount;
-(long long)_useCount;
-(void)shareWithContext:(id)arg1 ;
-(void)_shareWithContext:(id)arg1 ;
-(BOOL)isUsedByContext:(id)arg1 ;
-(BOOL)_isUsedByContext:(id)arg1 ;
-(BOOL)isUsed;
-(void)pushObject:(unsigned)arg1 ofType:(unsigned)arg2 ;
-(unsigned)popObjectOfType:(unsigned)arg1 ;
-(void)_pushObject:(unsigned)arg1 ofType:(unsigned)arg2 ;
-(unsigned)_popObjectOfType:(unsigned)arg1 ;
-(long long)objectCount;
-(long long)_objectCount;
@end

