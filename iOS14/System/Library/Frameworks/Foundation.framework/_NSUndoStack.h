/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class _NSUndoObject;

@interface _NSUndoStack : NSObject {

	unsigned long long _max;
	unsigned long long _count;
	unsigned long long _nestingLevel;
	_NSUndoObject* _head;

}
-(void)setGroupIdentifier:(id)arg1 ;
-(void)push:(id)arg1 ;
-(id)groupIdentifier;
-(id)init;
-(void)removeAllObjectsWithTarget:(id)arg1 ;
-(unsigned long long)nestingLevel;
-(BOOL)popAndInvoke;
-(unsigned long long)count;
-(void)markEnd;
-(id)popUndoObject;
-(void)markBegin;
-(id)description;
-(void)removeAllObjects;
-(unsigned long long)max;
-(void)removeObject:(id)arg1 ;
-(void)_removeBottom;
-(BOOL)isDiscardable;
-(void)setMax:(unsigned long long)arg1 ;
-(id)_beginMark;
-(void)setDiscardable:(BOOL)arg1 ;
-(void)dealloc;
-(id)topUndoObject;
@end

