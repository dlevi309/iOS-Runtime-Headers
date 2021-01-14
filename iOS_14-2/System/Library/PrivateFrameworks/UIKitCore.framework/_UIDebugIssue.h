/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)prefix;
-(id)init;
-(NSArray *)subissues;
-(void)addIssue:(id)arg1 ;
-(NSString *)description;
-(void)setPrefix:(NSString *)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(id)_subissueReport;
@end

