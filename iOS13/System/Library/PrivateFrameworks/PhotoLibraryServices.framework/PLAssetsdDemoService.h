/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

