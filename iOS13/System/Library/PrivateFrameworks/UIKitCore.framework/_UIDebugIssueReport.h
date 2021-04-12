/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDebugIssueReporting.h>

@class NSMutableArray, NSArray, NSString;

@interface _UIDebugIssueReport : NSObject <_UIDebugIssueReporting> {

	NSMutableArray* _mutableIssues;

}

@property (nonatomic,copy,readonly) NSArray * issues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addIssue:(id)arg1 ;
-(NSArray *)issues;
@end

