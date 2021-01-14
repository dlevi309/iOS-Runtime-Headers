/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)serialize;
-(void)saveToArchive:(Selection*)arg1 ;
-(id)initWithArchive:(const Selection*)arg1 ;
-(vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > >*)selectionRanges;
-(void)updateTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(BOOL)hasTopoIDsThatCanChange;
-(id)initWithData:(id)arg1 ;
-(NSString *)description;
-(void)setSelectionAffinity:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)selectionAffinity;
-(BOOL)isEqual:(id)arg1 ;
@end

