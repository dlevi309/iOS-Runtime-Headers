/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>
#import <libobjc.A.dylib/WFModuleSummarySupporting.h>

@class NSString;

@interface WFSwitchParameter : WFParameter <WFModuleSummarySupporting> {

	NSString* _localizedOnDisplayName;
	NSString* _localizedOffDisplayName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * onDisplayName; 
@property (nonatomic,readonly) NSString * offDisplayName; 
@property (nonatomic,readonly) NSString * localizedOnDisplayName;               //@synthesize localizedOnDisplayName=_localizedOnDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * localizedOffDisplayName;              //@synthesize localizedOffDisplayName=_localizedOffDisplayName - In the implementation block
+(id)defaultOffDisplayName;
+(id)defaultOnDisplayName;
-(id)moduleSummarySlotForState:(id)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(NSString *)onDisplayName;
-(NSString *)offDisplayName;
-(NSString *)localizedOnDisplayName;
-(NSString *)localizedOffDisplayName;
@end

