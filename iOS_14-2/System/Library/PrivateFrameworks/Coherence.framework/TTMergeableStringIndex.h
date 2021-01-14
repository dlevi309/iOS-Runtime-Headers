/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
*/


#import <Coherence/Coherence-Structs.h>
@class _TtC9Coherence9CRContext;

@interface TTMergeableStringIndex : NSObject {

	_TtC9Coherence9CRContext* _context;
	unsigned long long _affinity;
	TopoID _index;

}

@property (nonatomic,readonly) _TtC9Coherence9CRContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned long long affinity;                     //@synthesize affinity=_affinity - In the implementation block
@property (nonatomic,readonly) TopoID index;                                    //@synthesize index=_index - In the implementation block
-(TopoID)index;
-(_TtC9Coherence9CRContext *)context;
-(unsigned long long)affinity;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)_objCRenameSequence;
-(id)initWithContext:(id)arg1 topoID:(TopoID)arg2 affinity:(unsigned long long)arg3 ;
@end

