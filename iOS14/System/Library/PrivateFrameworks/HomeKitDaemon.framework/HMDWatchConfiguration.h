/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSDictionary, NSUUID;

@interface HMDWatchConfiguration : HMFObject {

	NSString* _uniqueId;
	NSDictionary* _metadataConfig;
	NSDictionary* _homeConfig;
	NSUUID* _primaryHome;

}

@property (nonatomic,retain) NSString * uniqueId;                        //@synthesize uniqueId=_uniqueId - In the implementation block
@property (nonatomic,retain) NSDictionary * metadataConfig;              //@synthesize metadataConfig=_metadataConfig - In the implementation block
@property (nonatomic,retain) NSDictionary * homeConfig;                  //@synthesize homeConfig=_homeConfig - In the implementation block
@property (nonatomic,retain) NSUUID * primaryHome;                       //@synthesize primaryHome=_primaryHome - In the implementation block
-(id)initWithUniqueID:(id)arg1 ;
-(id)description;
-(void)setPrimaryHome:(NSUUID *)arg1 ;
-(NSString *)uniqueId;
-(void)setUniqueId:(NSString *)arg1 ;
-(NSUUID *)primaryHome;
-(NSDictionary *)metadataConfig;
-(NSDictionary *)homeConfig;
-(void)setHomeConfig:(NSDictionary *)arg1 ;
-(void)setHomeConfiguration:(id)arg1 ;
-(void)setConfigVersion:(id)arg1 forHome:(id)arg2 ;
-(void)setMetadataConfig:(NSDictionary *)arg1 ;
@end

