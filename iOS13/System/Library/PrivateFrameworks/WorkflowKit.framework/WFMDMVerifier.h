/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSString, NSArray;

@interface WFMDMVerifier : NSObject {

	NSString* _actionName;
	NSArray* _contentSources;

}

@property (nonatomic,copy,readonly) NSString * actionName;                 //@synthesize actionName=_actionName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contentSources;              //@synthesize contentSources=_contentSources - In the implementation block
+(id)dataInfosFromContentSources:(id)arg1 withManagedLevel:(unsigned long long)arg2 ;
-(id)initWithAction:(id)arg1 ;
-(NSArray *)contentSources;
-(NSString *)actionName;
-(BOOL)canSendDataToTargetDataInfo:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentSources:(id)arg1 actionName:(id)arg2 ;
-(id)errorFromFailedVerificationContentSources:(id)arg1 targetDataInfo:(id)arg2 destinationManagedLevel:(unsigned long long)arg3 ;
@end

