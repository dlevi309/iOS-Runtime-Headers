/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPUserPrivacySettings;

@interface CKDPUserPrivacySettingsRetrieveResponse : PBCodable <NSCopying> {

	NSMutableArray* _applicationBundles;
	CKDPUserPrivacySettings* _userPrivacySettings;

}

@property (nonatomic,readonly) BOOL hasUserPrivacySettings; 
@property (nonatomic,retain) CKDPUserPrivacySettings * userPrivacySettings;              //@synthesize userPrivacySettings=_userPrivacySettings - In the implementation block
@property (nonatomic,retain) NSMutableArray * applicationBundles;                        //@synthesize applicationBundles=_applicationBundles - In the implementation block
+(Class)applicationBundleType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addApplicationBundle:(id)arg1 ;
-(unsigned long long)applicationBundlesCount;
-(void)clearApplicationBundles;
-(id)applicationBundleAtIndex:(unsigned long long)arg1 ;
-(void)setUserPrivacySettings:(CKDPUserPrivacySettings *)arg1 ;
-(BOOL)hasUserPrivacySettings;
-(NSMutableArray *)applicationBundles;
-(void)setApplicationBundles:(NSMutableArray *)arg1 ;
-(CKDPUserPrivacySettings *)userPrivacySettings;
@end

