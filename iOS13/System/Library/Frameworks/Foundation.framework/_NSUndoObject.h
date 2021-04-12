/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@interface _NSUndoObject : NSObject {

	_NSUndoObject* next;
	_NSUndoObject* previous;
	id _target;

}
-(id)init;
-(void)invoke;
-(id)target;
-(BOOL)isEndMark;
-(BOOL)isBeginMark;
-(id)initWithTarget:(id)arg1 ;
@end

