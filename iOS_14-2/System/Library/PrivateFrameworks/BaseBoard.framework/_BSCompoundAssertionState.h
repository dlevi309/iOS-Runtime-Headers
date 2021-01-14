/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSCompoundAssertionState.h>

@class NSSet, NSOrderedSet;

@interface _BSCompoundAssertionState : NSObject <BSCompoundAssertionState> {

	BOOL _active;
	NSOrderedSet* _context;

}

@property (getter=isActive,readonly) BOOL active; 
@property (readonly) NSSet * context; 
@property (readonly) NSOrderedSet * orderedContext; 
-(BOOL)isActive;
-(NSSet *)context;
-(id)description;
-(NSOrderedSet *)orderedContext;
@end

