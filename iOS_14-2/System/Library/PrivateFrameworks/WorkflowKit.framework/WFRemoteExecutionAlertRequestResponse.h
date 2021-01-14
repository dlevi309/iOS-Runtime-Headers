/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRemoteExecutionRequest.h>

@class NSString, NSError;

@interface WFRemoteExecutionAlertRequestResponse : WFRemoteExecutionRequest {

	NSString* _requestIdentifier;
	NSString* _selectedButton;
	NSError* _error;

}

@property (nonatomic,readonly) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * selectedButton;                 //@synthesize selectedButton=_selectedButton - In the implementation block
@property (nonatomic,retain) NSError * error;                             //@synthesize error=_error - In the implementation block
+(long long)version;
-(NSString *)requestIdentifier;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSString *)selectedButton;
-(BOOL)readMessageFromData:(id)arg1 error:(id*)arg2 ;
-(id)writeMessageToWriter:(id)arg1 error:(id*)arg2 ;
-(id)initWithSelectedButton:(id)arg1 requestIdentifier:(id)arg2 error:(id)arg3 ;
@end

