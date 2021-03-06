/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/TTMergeableUndoString.h>
#import <libobjc.A.dylib/CRCoding.h>

@class NSString;

@interface TTMergeableAttributedString : TTMergeableUndoString <CRCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)writingDirectionForAttribute:(int)arg1 ;
+(int)attributeForWritingDirection:(long long)arg1 ;
+(id)attributesForRun:(const AttributeRun*)arg1 ;
+(void)saveAttributes:(id)arg1 toArchive:(AttributeRun*)arg2 ;
+(void)saveAttributesOfString:(id)arg1 toArchive:(String*)arg2 ;
+(id)whitelistedTypingAttributes;
+(id)whitelistedAttributesForModel;
+(id)whitelistedAttributesForStyle;
-(id)serialize;
-(void)saveToArchive:(String*)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 string:(String*)arg2 ;
-(id)initWithCRCoder:(id)arg1 string:(const String*)arg2 ;
-(id)initWithArchive:(const String*)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >*)arg3 timestamp:(id)arg4 ;
-(void)saveDeltaSinceTimestamp:(id)arg1 toArchive:(String*)arg2 ;
-(void)setAttributes:(id)arg1 substring:(TopoSubstring*)arg2 ;
-(BOOL)attributesEqual:(id)arg1 toRange:(NSRange)arg2 modelEqual:(BOOL*)arg3 ;
-(BOOL)attributesEqual:(id)arg1 to:(id)arg2 modelEqual:(BOOL*)arg3 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)initWithCRCoder:(id)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)encodeWithCRCoder:(id)arg1 ;
@end

