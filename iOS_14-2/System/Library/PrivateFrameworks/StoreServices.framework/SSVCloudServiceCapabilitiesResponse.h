/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)debugDescription;
-(id)_descriptionWithSubscriptionStatusDescriptorBlock:(/*^block*/id)arg1 ;
-(BOOL)supportsMusicCatalogPlayback;
-(void)setSupportsMusicCatalogPlayback:(BOOL)arg1 ;
-(BOOL)supportsAddToCloudMusicLibrary;
-(void)setSupportsAddToCloudMusicLibrary:(BOOL)arg1 ;
-(BOOL)canSubscribeToMusicCatalog;
-(void)setCanSubscribeToMusicCatalog:(BOOL)arg1 ;
-(NSString *)description;
-(void)setSubscriptionStatus:(SSVSubscriptionStatus *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SSVSubscriptionStatus *)subscriptionStatus;
@end

