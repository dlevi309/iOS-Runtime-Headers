/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/

@class ASTIdentity;


@protocol ASTConnectionManager <NSObject>
@property (assign,nonatomic,__weak) id<ASTConnectionManagerDelegate> delegate; 
@property (nonatomic,retain) ASTIdentity * identity; 
@required
-(void)setIdentity:(id)arg1;
-(id<ASTConnectionManagerDelegate>)delegate;
-(ASTIdentity *)identity;
-(void)setDelegate:(id)arg1;
-(void)postSessionExistsForIdentities:(id)arg1 ticket:(id)arg2 timeout:(double)arg3 allowsCellularAccess:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(id)postEnrollAllowingCellularAccess:(BOOL)arg1;
-(id)postRequest:(id)arg1 allowsCellularAccess:(BOOL)arg2;
-(BOOL)postAuthInfo:(id)arg1 allowsCellularAccess:(BOOL)arg2;
-(BOOL)postProfile:(id)arg1 allowsCellularAccess:(BOOL)arg2;
-(void)postSealableFile:(id)arg1 fileSequence:(id)arg2 totalFiles:(id)arg3 testId:(id)arg4 dataId:(id)arg5 allowsCellularAccess:(BOOL)arg6 completion:(/*^block*/id)arg7;
-(void)postTestResult:(id)arg1 allowsCellularAccess:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)cancelAllTestResults;
-(void)downloadAsset:(id)arg1 destinationFileHandle:(id)arg2 allowsCellularAccess:(BOOL)arg3 completion:(/*^block*/id)arg4;

@end

