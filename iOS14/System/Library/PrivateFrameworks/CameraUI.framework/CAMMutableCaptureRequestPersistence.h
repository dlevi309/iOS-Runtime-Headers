/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

@class NSURL, NSString;


@protocol CAMMutableCaptureRequestPersistence <NSObject>
@property (assign,nonatomic) long long persistenceOptions; 
@property (assign,nonatomic) unsigned long long deferredPersistenceOptions; 
@property (assign,nonatomic) long long temporaryPersistenceOptions; 
@property (nonatomic,copy) NSURL * localDestinationURL; 
@property (nonatomic,copy) NSString * persistenceUUID; 
@property (assign,nonatomic) BOOL shouldExtractDiagnosticsFromMetadata; 
@property (assign,nonatomic) BOOL shouldPersistDiagnosticsToSidecar; 
@property (assign,nonatomic) BOOL shouldDelayRemotePersistence; 
@required
-(void)setTemporaryPersistenceOptions:(long long)arg1;
-(void)setPersistenceUUID:(id)arg1;
-(BOOL)shouldDelayRemotePersistence;
-(void)setShouldPersistDiagnosticsToSidecar:(BOOL)arg1;
-(void)setLocalDestinationURL:(id)arg1;
-(NSURL *)localDestinationURL;
-(NSString *)persistenceUUID;
-(void)setShouldExtractDiagnosticsFromMetadata:(BOOL)arg1;
-(void)setPersistenceOptions:(long long)arg1;
-(void)setDeferredPersistenceOptions:(unsigned long long)arg1;
-(void)setShouldDelayRemotePersistence:(BOOL)arg1;
-(long long)persistenceOptions;
-(long long)temporaryPersistenceOptions;
-(unsigned long long)deferredPersistenceOptions;
-(BOOL)shouldExtractDiagnosticsFromMetadata;
-(BOOL)shouldPersistDiagnosticsToSidecar;

@end

