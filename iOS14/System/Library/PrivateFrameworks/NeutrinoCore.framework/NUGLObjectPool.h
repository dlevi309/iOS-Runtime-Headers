/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithContext:(id)arg1 ;
-(long long)_useCount;
-(BOOL)isUsed;
-(id)description;
-(long long)objectCount;
-(long long)useCount;
-(void)dealloc;
-(void)shareWithContext:(id)arg1 ;
-(void)_shareWithContext:(id)arg1 ;
-(BOOL)isUsedByContext:(id)arg1 ;
-(BOOL)_isUsedByContext:(id)arg1 ;
-(void)pushObject:(unsigned)arg1 ofType:(unsigned)arg2 ;
-(unsigned)popObjectOfType:(unsigned)arg1 ;
-(void)_pushObject:(unsigned)arg1 ofType:(unsigned)arg2 ;
-(unsigned)_popObjectOfType:(unsigned)arg1 ;
-(long long)_objectCount;
@end

