/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSString, NSError;


@protocol PLAssetsdServiceContext <NSObject>
@property (nonatomic,readonly) BOOL isClientAuthorizedForTCCServicePhotos; 
@property (nonatomic,readonly) BOOL isClientAuthorizedForTCCServicePhotosAdd; 
@property (nonatomic,copy,readonly) NSString * clientDebugDescription; 
@property (nonatomic,copy) NSError * replyWarning; 
@required
-(BOOL)isClientAuthorizedForTCCServicePhotos;
-(void)awaitLibraryState:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(NSError *)replyWarning;
-(void)setReplyWarning:(id)arg1;
-(BOOL)isClientAuthorizedForTCCServicePhotosAdd;
-(NSString *)clientDebugDescription;
-(BOOL)hasEntitlement:(id)arg1;

@end

