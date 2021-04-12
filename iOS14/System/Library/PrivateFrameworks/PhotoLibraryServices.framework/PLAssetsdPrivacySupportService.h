/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLAssetsdPrivacySupportServiceProtocol.h>

@class PLAssetsdConnectionAuthorization, NSString;

@interface PLAssetsdPrivacySupportService : NSObject <PLAssetsdPrivacySupportServiceProtocol> {

	PLAssetsdConnectionAuthorization* _connectionAuthorization;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnectionAuthorization:(id)arg1 ;
-(void)setClientPrivacyOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)presentLimitedLibraryPickerReprompt:(/*^block*/id)arg1 ;
@end

