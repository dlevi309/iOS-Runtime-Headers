/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/


@class NSString;

@interface DRSDecisionServerRequestReply : NSObject {

	BOOL _requestAccepted;
	id _request;
	NSString* _rejectionReason;

}

@property (nonatomic,readonly) id request;                              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL requestAccepted;                    //@synthesize requestAccepted=_requestAccepted - In the implementation block
@property (nonatomic,readonly) NSString * rejectionReason;              //@synthesize rejectionReason=_rejectionReason - In the implementation block
-(id)request;
-(NSString *)rejectionReason;
-(id)initWithOriginalRequest:(id)arg1 requestAccepted:(BOOL)arg2 rejectionReason:(id)arg3 ;
-(id)initWithOriginalRequest:(id)arg1 reply:(id)arg2 ;
-(BOOL)requestAccepted;
@end

