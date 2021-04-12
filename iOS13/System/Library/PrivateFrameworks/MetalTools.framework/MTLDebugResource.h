/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <libobjc.A.dylib/NSObject.h>

@class NSString, MTLDebugHeap;

@interface MTLDebugResource : NSObject <NSObject> {

	id _baseObject;
	id _parent;
	MTLDebugHeap* _heap;
	BOOL _hasTrackedMakeAliasable;

}

@property (readonly) id baseObject;                                 //@synthesize baseObject=_baseObject - In the implementation block
@property (readonly) id<MTLHeap> heap; 
@property (assign) BOOL hasTrackedMakeAliasable;                    //@synthesize hasTrackedMakeAliasable=_hasTrackedMakeAliasable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MTLHeap>)heap;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(id)baseObject;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 heap:(id)arg3 ;
-(BOOL)hasTrackedMakeAliasable;
-(void)setHasTrackedMakeAliasable:(BOOL)arg1 ;
@end

