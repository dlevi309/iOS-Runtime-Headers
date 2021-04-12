/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)shouldAutoUnlockForSource:(int)arg1 ;
-(id)init;
-(void)addAutoUnlockRule:(id)arg1 ;
-(void)removeAutoUnlockRule:(id)arg1 ;
@end

