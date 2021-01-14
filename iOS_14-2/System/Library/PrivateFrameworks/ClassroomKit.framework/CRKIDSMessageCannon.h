/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKIDSPrimitives;
@class CRKIDSMessageFormatter;

@interface CRKIDSMessageCannon : NSObject {

	id<CRKIDSPrimitives> _IDSPrimitives;
	CRKIDSMessageFormatter* _messageFormatter;

}

@property (nonatomic,readonly) id<CRKIDSPrimitives> IDSPrimitives;                     //@synthesize IDSPrimitives=_IDSPrimitives - In the implementation block
@property (nonatomic,readonly) CRKIDSMessageFormatter * messageFormatter;              //@synthesize messageFormatter=_messageFormatter - In the implementation block
-(id<CRKIDSPrimitives>)IDSPrimitives;
-(id)initWithIDSPrimitives:(id)arg1 ;
-(void)sendIDSMessage:(id)arg1 destinationAddress:(id)arg2 sourceAppleID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(CRKIDSMessageFormatter *)messageFormatter;
@end

