/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDebugReportFormatter.h>

@class NSString;

@interface _UIDebugIssueReportFormatter : _UIDebugReportFormatter {

	NSString* _header;
	NSString* _footer;
	NSString* _noIssuesDescription;
	NSString* _defaultIssuePrefix;

}

@property (nonatomic,copy) NSString * header;                           //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * footer;                           //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy) NSString * noIssuesDescription;              //@synthesize noIssuesDescription=_noIssuesDescription - In the implementation block
@property (nonatomic,copy) NSString * defaultIssuePrefix;               //@synthesize defaultIssuePrefix=_defaultIssuePrefix - In the implementation block
-(id)init;
-(NSString *)header;
-(void)setHeader:(NSString *)arg1 ;
-(void)setNoIssuesDescription:(NSString *)arg1 ;
-(id)stringFromReport:(id)arg1 ;
-(NSString *)noIssuesDescription;
-(NSString *)defaultIssuePrefix;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
-(id)_componentsFromReport:(id)arg1 ;
-(void)setDefaultIssuePrefix:(NSString *)arg1 ;
@end

