/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLAssetsdDemoServiceProtocol.h>

@class PLAssetsdConnectionAuthorization, NSString;

@interface PLAssetsdDemoService : NSObject <PLAssetsdDemoServiceProtocol> {

	PLAssetsdConnectionAuthorization* _connectionAuthorization;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cleanupForStoreDemoMode;
-(void)hasCompletedRestorePostProcessingWithReply:(/*^block*/id)arg1 ;
-(void)hasCompletedMomentAnalysisWithReply:(/*^block*/id)arg1 ;
-(id)initWithConnectionAuthorization:(id)arg1 ;
@end

