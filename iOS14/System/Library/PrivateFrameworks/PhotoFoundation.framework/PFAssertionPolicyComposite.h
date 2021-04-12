/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

