/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <StoreKit/SKRequest.h>

@class NSString;

@interface SKInstallSheetStatusUpdateRequest : SKRequest {

	BOOL _isInstallSheetOpen;
	/*^block*/id _completionHandler;
	NSString* _bundleId;

}

@property (nonatomic,copy) id completionHandler;                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * bundleId;                    //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL isInstallSheetOpen;              //@synthesize isInstallSheetOpen=_isInstallSheetOpen - In the implementation block
-(void)_start;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_handleReply:(id)arg1 ;
-(void)setIsInstallSheetOpen:(BOOL)arg1 ;
-(id)initWithAppBundleId:(id)arg1 isInstallSheetOpen:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isInstallSheetOpen;
@end

