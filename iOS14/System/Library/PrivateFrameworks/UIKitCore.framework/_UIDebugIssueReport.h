/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)issues;
-(id)init;
-(void)addIssue:(id)arg1 ;
@end

