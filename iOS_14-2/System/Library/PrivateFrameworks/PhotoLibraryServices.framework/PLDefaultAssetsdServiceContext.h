/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLAssetsdServiceContext.h>

@class NSString, NSError, NSXPCConnection, PLPhotoLibraryBundle, PLAssetsdConnectionAuthorization;

@interface PLDefaultAssetsdServiceContext : NSObject <PLAssetsdServiceContext> {

	SEL _selector;
	NSXPCConnection* _connection;
	PLPhotoLibraryBundle* _libraryBundle;
	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	NSError* _replyWarning;

}

@property (nonatomic,copy) NSError * replyWarning;                                         //@synthesize replyWarning=_replyWarning - In the implementation block
@property (nonatomic,readonly) BOOL isClientAuthorizedForTCCServicePhotos; 
@property (nonatomic,readonly) BOOL isClientAuthorizedForTCCServicePhotosAdd; 
@property (nonatomic,copy,readonly) NSString * clientDebugDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)libraryServicesManager;
-(BOOL)isClientAuthorizedForTCCServicePhotos;
-(void)awaitLibraryState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithSelector:(SEL)arg1 connection:(id)arg2 libraryBundle:(id)arg3 connectionAuthorization:(id)arg4 ;
-(NSError *)replyWarning;
-(void)setReplyWarning:(NSError *)arg1 ;
-(BOOL)isClientAuthorizedForTCCServicePhotosAdd;
-(NSString *)clientDebugDescription;
-(BOOL)hasEntitlement:(id)arg1 ;
@end

