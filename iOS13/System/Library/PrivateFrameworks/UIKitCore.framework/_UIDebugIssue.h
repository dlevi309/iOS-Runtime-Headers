/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDebugIssueReporting.h>

@class NSString, _UIDebugIssueReport, NSArray;

@interface _UIDebugIssue : NSObject <_UIDebugIssueReporting> {

	NSString* _description;
	NSString* _prefix;
	_UIDebugIssueReport* _subissueReport;

}

@property (getter=_subissueReport,nonatomic,readonly) _UIDebugIssueReport * subissueReport;              //@synthesize subissueReport=_subissueReport - In the implementation block
@property (nonatomic,copy) NSString * prefix;                                                            //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy) NSString * description;                                                       //@synthesize description=_description - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subissues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * debugDescription; 
+(id)issueWithDescription:(id)arg1 ;
+(id)issueWithFormat:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(NSString *)prefix;
-(void)addIssue:(id)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(NSArray *)subissues;
-(void)setPrefix:(NSString *)arg1 ;
-(id)_subissueReport;
@end

