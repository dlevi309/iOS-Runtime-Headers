/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <libobjc.A.dylib/PFAssertionPolicyHandler.h>

@class NSMutableArray, NSArray, NSString;

@interface PFAssertionPolicyComposite : NSObject <PFAssertionPolicyHandler> {

	NSMutableArray* _policies;

}

@property (readonly) NSArray * policies;                            //@synthesize policies=_policies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)policies;
-(void)addPolicy:(id)arg1 ;
-(void)notifyAssertion:(id)arg1 ;
@end

