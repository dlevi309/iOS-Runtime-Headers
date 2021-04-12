/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol BLTSettingsSendSerializerDelegate;
@interface BLTSettingsSendSerializerPassthrough : NSObject {

	id<BLTSettingsSendSerializerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BLTSettingsSendSerializerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<BLTSettingsSendSerializerDelegate>)delegate;
-(void)setDelegate:(id<BLTSettingsSendSerializerDelegate>)arg1 ;
-(void)handleFileURL:(id)arg1 ;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(/*^block*/id)arg6 andResponse:(/*^block*/id)arg7 spoolToFile:(BOOL)arg8 ;
-(void)sendNowWithSent:(/*^block*/id)arg1 withAcknowledgement:(/*^block*/id)arg2 withTimeout:(id)arg3 ;
@end

