/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBAutoUnlockRule.h>

@class NSMutableSet, NSString;

@interface SBAutoUnlockComposableRule : NSObject <SBAutoUnlockRule> {

	NSMutableSet* _rules;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)shouldAutoUnlockForSource:(int)arg1 ;
-(void)addAutoUnlockRule:(id)arg1 ;
-(void)removeAutoUnlockRule:(id)arg1 ;
@end

