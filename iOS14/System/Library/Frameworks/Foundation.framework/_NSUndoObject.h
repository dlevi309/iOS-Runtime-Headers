/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@interface _NSUndoObject : NSObject {

	_NSUndoObject* next;
	_NSUndoObject* previous;
	id _target;

}
-(void)invoke;
-(id)init;
-(id)initWithTarget:(id)arg1 ;
-(BOOL)isBeginMark;
-(BOOL)isEndMark;
-(id)target;
@end

