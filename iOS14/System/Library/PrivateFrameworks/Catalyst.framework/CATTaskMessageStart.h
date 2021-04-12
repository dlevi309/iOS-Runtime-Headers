/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Catalyst/CATTaskMessage.h>

@class CATTaskRequest;

@interface CATTaskMessageStart : CATTaskMessage {

	CATTaskRequest* _request;

}

@property (nonatomic,retain) CATTaskRequest * request;              //@synthesize request=_request - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithTaskUUID:(id)arg1 request:(id)arg2 ;
-(void)setRequest:(CATTaskRequest *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CATTaskRequest *)request;
-(id)initWithCoder:(id)arg1 ;
@end

