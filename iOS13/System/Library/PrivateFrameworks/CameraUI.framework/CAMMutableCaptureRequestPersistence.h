/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)persistenceUUID;
-(long long)persistenceOptions;
-(void)setPersistenceOptions:(long long)arg1;
-(long long)temporaryPersistenceOptions;
-(void)setTemporaryPersistenceOptions:(long long)arg1;
-(BOOL)shouldDelayRemotePersistence;
-(void)setPersistenceUUID:(id)arg1;
-(void)setShouldDelayRemotePersistence:(BOOL)arg1;
-(NSURL *)localDestinationURL;
-(unsigned long long)deferredPersistenceOptions;
-(void)setDeferredPersistenceOptions:(unsigned long long)arg1;
-(void)setLocalDestinationURL:(id)arg1;
-(BOOL)shouldExtractDiagnosticsFromMetadata;
-(void)setShouldExtractDiagnosticsFromMetadata:(BOOL)arg1;
-(BOOL)shouldPersistDiagnosticsToSidecar;
-(void)setShouldPersistDiagnosticsToSidecar:(BOOL)arg1;

@end

