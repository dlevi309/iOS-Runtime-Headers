/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
*/

#import <CoreRE/CoreRE-Structs.h>
#import <libobjc.A.dylib/REResourceSharingService.h>

@class NSString;

@interface REResourceSharingClientObject : NSObject <REResourceSharingService> {

	AssetService* _assetService;
	ResourceSharingManager* _resourceSharingManager;

}

@property (nonatomic,readonly) AssetService* assetService;                                  //@synthesize assetService=_assetService - In the implementation block
@property (nonatomic,readonly) ResourceSharingManager* resourceSharingManager;              //@synthesize resourceSharingManager=_resourceSharingManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchResourceAtAssetPath:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(id)initWithAssetService:(AssetService*)arg1 resourceSharingManager:(ResourceSharingManager*)arg2 ;
-(AssetService*)assetService;
-(ResourceSharingManager*)resourceSharingManager;
@end

