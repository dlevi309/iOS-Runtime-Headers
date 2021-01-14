/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <StoreKit/SKRequest.h>

@class NSString;

@interface SKInstallSheetStatusUpdateRequest : SKRequest {

	NSString* _bundleId;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NSString * bundleId;              //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,copy) id completionHandler;                 //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(NSString *)bundleId;
-(void)_start;
-(id)completionHandler;
-(id)initWithAppBundleId:(id)arg1 isInstallSheetOpen:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

