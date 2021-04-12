/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSVSubscriptionStatus, NSString;

@interface SSVCloudServiceCapabilitiesResponse : NSObject <SSXPCCoding, NSCopying> {

	BOOL _supportsMusicCatalogPlayback;
	BOOL _supportsAddToCloudMusicLibrary;
	BOOL _canSubscribeToMusicCatalog;
	SSVSubscriptionStatus* _subscriptionStatus;

}

@property (nonatomic,copy) SSVSubscriptionStatus * subscriptionStatus;              //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
@property (assign,nonatomic) BOOL supportsMusicCatalogPlayback;                     //@synthesize supportsMusicCatalogPlayback=_supportsMusicCatalogPlayback - In the implementation block
@property (assign,nonatomic) BOOL supportsAddToCloudMusicLibrary;                   //@synthesize supportsAddToCloudMusicLibrary=_supportsAddToCloudMusicLibrary - In the implementation block
@property (assign,nonatomic) BOOL canSubscribeToMusicCatalog;                       //@synthesize canSubscribeToMusicCatalog=_canSubscribeToMusicCatalog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SSVSubscriptionStatus *)subscriptionStatus;
-(void)setSubscriptionStatus:(SSVSubscriptionStatus *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)supportsMusicCatalogPlayback;
-(BOOL)supportsAddToCloudMusicLibrary;
-(BOOL)canSubscribeToMusicCatalog;
-(id)_descriptionWithSubscriptionStatusDescriptorBlock:(/*^block*/id)arg1 ;
-(void)setSupportsMusicCatalogPlayback:(BOOL)arg1 ;
-(void)setSupportsAddToCloudMusicLibrary:(BOOL)arg1 ;
-(void)setCanSubscribeToMusicCatalog:(BOOL)arg1 ;
@end

