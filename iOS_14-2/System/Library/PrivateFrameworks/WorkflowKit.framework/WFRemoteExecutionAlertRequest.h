/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRemoteExecutionRequest.h>

@class NSString, WFAlert, WFPBAlert;

@interface WFRemoteExecutionAlertRequest : WFRemoteExecutionRequest {

	NSString* _associatedRunRequestIdentifier;
	WFAlert* _alert;
	WFPBAlert* _pbAlert;

}

@property (nonatomic,retain) WFPBAlert * pbAlert;                                      //@synthesize pbAlert=_pbAlert - In the implementation block
@property (nonatomic,readonly) NSString * associatedRunRequestIdentifier;              //@synthesize associatedRunRequestIdentifier=_associatedRunRequestIdentifier - In the implementation block
@property (nonatomic,readonly) WFAlert * alert;                                        //@synthesize alert=_alert - In the implementation block
+(long long)version;
-(WFAlert *)alert;
-(WFPBAlert *)pbAlert;
-(BOOL)readMessageFromData:(id)arg1 error:(id*)arg2 ;
-(id)writeMessageToWriter:(id)arg1 error:(id*)arg2 ;
-(NSString *)associatedRunRequestIdentifier;
-(id)initWithAlert:(id)arg1 associatedRunRequestIdentifier:(id)arg2 ;
-(void)inflateAlertWithBlock:(/*^block*/id)arg1 ;
-(void)setPbAlert:(WFPBAlert *)arg1 ;
@end

