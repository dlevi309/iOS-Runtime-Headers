/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>

@class NSString;

@interface WFSwitchParameter : WFParameter {

	NSString* _localizedOnDisplayName;
	NSString* _localizedOffDisplayName;

}

@property (nonatomic,readonly) NSString * localizedOnDisplayName;               //@synthesize localizedOnDisplayName=_localizedOnDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * localizedOffDisplayName;              //@synthesize localizedOffDisplayName=_localizedOffDisplayName - In the implementation block
+(id)defaultOffDisplayName;
+(id)defaultOnDisplayName;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(NSString *)localizedOnDisplayName;
-(NSString *)localizedOffDisplayName;
@end

