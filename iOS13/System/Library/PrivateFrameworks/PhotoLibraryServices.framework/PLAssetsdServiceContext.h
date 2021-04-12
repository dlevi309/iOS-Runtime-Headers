/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSString, NSError;


@protocol PLAssetsdServiceContext <NSObject>
@property (nonatomic,readonly) BOOL isClientAuthorizedForTCCServicePhotos; 
@property (nonatomic,readonly) BOOL isClientAuthorizedForTCCServicePhotosAdd; 
@property (nonatomic,copy,readonly) NSString * clientDebugDescription; 
@property (nonatomic,copy) NSError * replyWarning; 
@required
-(BOOL)hasEntitlement:(id)arg1;
-(NSString *)clientDebugDescription;
-(BOOL)isClientAuthorizedForTCCServicePhotos;
-(BOOL)isClientAuthorizedForTCCServicePhotosAdd;
-(void)awaitLibraryState:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(NSError *)replyWarning;
-(void)setReplyWarning:(id)arg1;

@end

