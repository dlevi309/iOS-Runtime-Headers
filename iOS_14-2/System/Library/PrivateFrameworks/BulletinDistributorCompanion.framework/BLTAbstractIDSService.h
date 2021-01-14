/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol BLTAbstractIDSService <NSObject>
@property (nonatomic,readonly) id<BLTAbstractIDSDevice> defaultPairedDevice; 
@required
-(void)addDelegate:(id)arg1 queue:(id)arg2;
-(void)removeDelegate:(id)arg1;
-(id<BLTAbstractIDSDevice>)defaultPairedDevice;
-(void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
-(void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;
-(BOOL)sendResourceAtURL:(id)arg1 metadata:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
-(id)initWithService:(id)arg1;
-(BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;

@end

