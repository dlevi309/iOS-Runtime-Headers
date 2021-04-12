/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSCompoundAssertionState.h>

@class NSSet;

@interface _BSCompoundAssertionState : NSObject <BSCompoundAssertionState> {

	BOOL _active;
	NSSet* _context;

}

@property (getter=isActive,readonly) BOOL active; 
@property (readonly) NSSet * context; 
-(id)description;
-(BOOL)isActive;
-(NSSet *)context;
-(void)setActive:(BOOL)arg1 ;
-(void)setContext:(NSSet *)arg1 ;
@end

