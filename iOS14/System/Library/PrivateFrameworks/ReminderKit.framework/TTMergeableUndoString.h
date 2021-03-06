/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/TTMergeableString.h>

@interface TTMergeableUndoString : TTMergeableString
-(void)deleteSubstrings:(vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >*)arg1 withCharacterRanges:(vector<_NSRange, std::__1::allocator<_NSRange> >Ref)arg2 ;
-(TopoIDRange)insertAttributedString:(id)arg1 after:(TopoSubstring*)arg2 before:(TopoSubstring*)arg3 ;
-(void)addUndoCommand:(id)arg1 ;
-(void)applyUndoCommand:(id)arg1 ;
-(void)undeleteSubstrings:(vector<std::__1::pair<TopoIDRange, NSAttributedString *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *> > >*)arg1 ;
@end

