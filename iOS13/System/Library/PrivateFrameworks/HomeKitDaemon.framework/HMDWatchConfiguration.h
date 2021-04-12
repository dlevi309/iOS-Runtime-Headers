/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)uniqueId;
-(NSUUID *)primaryHome;
-(id)initWithUniqueID:(id)arg1 ;
-(void)setUniqueId:(NSString *)arg1 ;
-(void)setPrimaryHome:(NSUUID *)arg1 ;
-(NSDictionary *)metadataConfig;
-(NSDictionary *)homeConfig;
-(void)setHomeConfig:(NSDictionary *)arg1 ;
-(void)setHomeConfiguration:(id)arg1 ;
-(void)setConfigVersion:(id)arg1 forHome:(id)arg2 ;
-(void)setMetadataConfig:(NSDictionary *)arg1 ;
@end

