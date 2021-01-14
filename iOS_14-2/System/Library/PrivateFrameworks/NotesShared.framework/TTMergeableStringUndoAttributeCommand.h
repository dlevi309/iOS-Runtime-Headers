/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/TTMergeableStringUndoCommand.h>

@class NSString;

@interface TTMergeableStringUndoAttributeCommand : NSObject <TTMergeableStringUndoCommand> {

	vector<std::__1::pair<TopoIDRange, NSDictionary *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSDictionary *> > >* _attributeRanges;

}

@property (nonatomic,readonly) vector<std::__1::pair<TopoIDRange* attributeRanges;              //@synthesize attributeRanges=_attributeRanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)updateTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(BOOL)hasTopoIDsThatCanChange;
-(BOOL)addToGroup:(id)arg1 ;
-(vector<std::__1::pair<TopoIDRange*)attributeRanges;
-(NSString *)description;
-(void)applyToString:(id)arg1 ;
-(void)dealloc;
@end

