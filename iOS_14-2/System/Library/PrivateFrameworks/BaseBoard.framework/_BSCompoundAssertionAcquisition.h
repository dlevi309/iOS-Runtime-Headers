/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class BSCompoundAssertion, NSString;

@interface _BSCompoundAssertionAcquisition : NSObject <BSInvalidatable> {

	atomic_flag _invalid;
	BSCompoundAssertion* _assertion;
	NSString* _reason;
	id _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)dealloc;
@end

