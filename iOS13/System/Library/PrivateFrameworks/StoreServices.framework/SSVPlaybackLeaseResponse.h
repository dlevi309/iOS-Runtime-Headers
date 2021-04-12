/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVPlaybackResponse.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface SSVPlaybackLeaseResponse : SSVPlaybackResponse <NSCopying> {

	NSData* _certificateData;
	unsigned long long _kdMovieIdentifier;

}

@property (getter=isOfflineSlotAvailable,nonatomic,readonly) BOOL offlineSlotAvailable; 
@property (nonatomic,copy,readonly) NSData * leaseInfoData; 
@property (nonatomic,copy,readonly) NSData * subscriptionKeyBagData; 
@property (nonatomic,copy) NSData * certificateData;                                                 //@synthesize certificateData=_certificateData - In the implementation block
@property (assign,nonatomic) unsigned long long KDMovieIdentifier;                                   //@synthesize kdMovieIdentifier=_kdMovieIdentifier - In the implementation block
@property (nonatomic,readonly) double leaseDuration; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)certificateData;
-(id)itemForItemIdentifier:(id)arg1 ;
-(unsigned long long)KDMovieIdentifier;
-(double)leaseDuration;
-(BOOL)isOfflineSlotAvailable;
-(void)setCertificateData:(NSData *)arg1 ;
-(NSData *)leaseInfoData;
-(NSData *)subscriptionKeyBagData;
-(void)setKDMovieIdentifier:(unsigned long long)arg1 ;
@end

