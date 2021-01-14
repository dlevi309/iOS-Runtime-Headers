/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class CATTransport;

@interface CRKTransportPreflightResultObject : NSObject {

	BOOL _shouldResetBackoff;
	CATTransport* _transport;

}

@property (nonatomic,retain) CATTransport * transport;               //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) BOOL shouldResetBackoff;              //@synthesize shouldResetBackoff=_shouldResetBackoff - In the implementation block
-(CATTransport *)transport;
-(void)setTransport:(CATTransport *)arg1 ;
-(void)dealloc;
-(id)takeTransport;
-(BOOL)shouldResetBackoff;
-(id)initWithTransport:(id)arg1 shouldResetBackoff:(BOOL)arg2 ;
@end

