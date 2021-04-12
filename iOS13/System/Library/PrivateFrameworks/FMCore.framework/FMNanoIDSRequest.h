/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


@class NSString, FMDispatchTimer;

@interface FMNanoIDSRequest : NSObject {

	NSString* _idsMessageID;
	/*^block*/id _responseHandler;
	FMDispatchTimer* _timer;

}

@property (nonatomic,retain) NSString * idsMessageID;              //@synthesize idsMessageID=_idsMessageID - In the implementation block
@property (nonatomic,copy) id responseHandler;                     //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,retain) FMDispatchTimer * timer;              //@synthesize timer=_timer - In the implementation block
-(FMDispatchTimer *)timer;
-(void)setTimer:(FMDispatchTimer *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(NSString *)idsMessageID;
-(void)setIdsMessageID:(NSString *)arg1 ;
@end

