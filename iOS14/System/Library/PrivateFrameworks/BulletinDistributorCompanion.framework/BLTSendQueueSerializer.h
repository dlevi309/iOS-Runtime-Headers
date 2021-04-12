/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class NSURL;

@interface BLTSendQueueSerializer : NSObject {

	BOOL _usesMessageIdentifiers;
	NSURL* _sendFileURL;

}

@property (nonatomic,copy) NSURL * sendFileURL;                          //@synthesize sendFileURL=_sendFileURL - In the implementation block
@property (nonatomic,readonly) BOOL usesMessageIdentifiers;              //@synthesize usesMessageIdentifiers=_usesMessageIdentifiers - In the implementation block
-(void)cleanup;
-(void)add:(id)arg1 type:(unsigned short)arg2 messageIdentifier:(id*)arg3 ;
-(NSURL *)sendFileURL;
-(BOOL)usesMessageIdentifiers;
-(id)initWithUsesMessageIdentifiers:(BOOL)arg1 ;
-(void)setSendFileURL:(NSURL *)arg1 ;
-(void)add:(id)arg1 type:(unsigned short)arg2 ;
-(void)sendWithSender:(id)arg1 timeout:(id)arg2 responseHandlers:(id)arg3 didSend:(/*^block*/id)arg4 didQueue:(/*^block*/id)arg5 ;
-(BOOL)handleFileURL:(id)arg1 protobufHandler:(id)arg2 ;
@end

