/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSString, NSArray;

@interface WFMDMVerifier : NSObject {

	NSString* _actionName;
	NSArray* _contentAttributionSets;

}

@property (nonatomic,copy,readonly) NSString * actionName;                         //@synthesize actionName=_actionName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contentAttributionSets;              //@synthesize contentAttributionSets=_contentAttributionSets - In the implementation block
+(id)contentAttributionsFromContentAttributionSets:(id)arg1 withManagedLevel:(unsigned long long)arg2 ;
-(NSString *)actionName;
-(id)initWithAction:(id)arg1 ;
-(id)initWithContentAttributionSets:(id)arg1 actionName:(id)arg2 ;
-(BOOL)canSendDataToTargetContentAttribution:(id)arg1 error:(id*)arg2 ;
-(id)errorFromFailedVerificationContentAttributionSets:(id)arg1 targetContentAttribution:(id)arg2 destinationManagedLevel:(unsigned long long)arg3 ;
-(NSArray *)contentAttributionSets;
@end

