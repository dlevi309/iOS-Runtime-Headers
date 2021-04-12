/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
*/

#import <Coherence/Coherence-Structs.h>
#import <libobjc.A.dylib/TTMergeableStringIDTracker.h>

@class NSString;

@interface TTMergeableStringSelection : NSObject <TTMergeableStringIDTracker> {

	vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > >* _selectionRanges;
	unsigned long long _selectionAffinity;

}

@property (assign,nonatomic) unsigned long long selectionAffinity;              //@synthesize selectionAffinity=_selectionAffinity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithData:(id)arg1 ;
-(id)serialize;
-(unsigned long long)selectionAffinity;
-(void)setSelectionAffinity:(unsigned long long)arg1 ;
-(void)saveToArchive:(Selection*)arg1 ;
-(vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > >*)selectionRanges;
-(void)updateTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(BOOL)hasTopoIDsThatCanChange;
-(id)initWithArchive:(const Selection*)arg1 ;
@end

