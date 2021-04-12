/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKRemoteAssetManifestItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKRemoteCloudStoreAssetManifestItem : PKRemoteAssetManifestItem <NSSecureCoding>

@property (nonatomic,readonly) NSString * recordName; 
+(BOOL)supportsSecureCoding;
-(NSString *)recordName;
-(unsigned long long)itemType;
-(void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

