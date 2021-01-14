/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
*/

#import <DataAccess/DAMailboxRequest.h>

@class DAMailMessage;

@interface DADraftMessageRequest : DAMailboxRequest {

	BOOL _send;
	DAMailMessage* _message;

}

@property (nonatomic,retain) DAMailMessage * message;              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL send;                            //@synthesize send=_send - In the implementation block
-(void)setMessage:(DAMailMessage *)arg1 ;
-(DAMailMessage *)message;
-(id)description;
-(id)initWithRequestType:(int)arg1 message:(id)arg2 send:(BOOL)arg3 ;
-(void)setSend:(BOOL)arg1 ;
-(BOOL)send;
@end

