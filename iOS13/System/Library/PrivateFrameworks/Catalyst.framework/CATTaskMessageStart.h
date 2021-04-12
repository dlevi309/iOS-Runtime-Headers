/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Catalyst/CATTaskMessage.h>

@class CATTaskRequest;

@interface CATTaskMessageStart : CATTaskMessage {

	CATTaskRequest* _request;

}

@property (nonatomic,retain) CATTaskRequest * request;              //@synthesize request=_request - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRequest:(CATTaskRequest *)arg1 ;
-(CATTaskRequest *)request;
-(id)initWithTaskUUID:(id)arg1 request:(id)arg2 ;
@end

