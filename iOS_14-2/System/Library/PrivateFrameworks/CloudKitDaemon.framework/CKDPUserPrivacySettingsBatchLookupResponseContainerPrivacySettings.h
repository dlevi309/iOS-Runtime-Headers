/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, CKDPUserPrivacySettings;

@interface CKDPUserPrivacySettingsBatchLookupResponseContainerPrivacySettings : PBCodable <NSCopying> {

	NSMutableArray* _applicationBundles;
	NSString* _applicationContainer;
	int _applicationContainerEnvironment;
	CKDPUserPrivacySettings* _userPrivacySettings;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasApplicationContainer; 
@property (nonatomic,retain) NSString * applicationContainer;                            //@synthesize applicationContainer=_applicationContainer - In the implementation block
@property (assign,nonatomic) BOOL hasApplicationContainerEnvironment; 
@property (assign,nonatomic) int applicationContainerEnvironment;                        //@synthesize applicationContainerEnvironment=_applicationContainerEnvironment - In the implementation block
@property (nonatomic,retain) NSMutableArray * applicationBundles;                        //@synthesize applicationBundles=_applicationBundles - In the implementation block
@property (nonatomic,readonly) BOOL hasUserPrivacySettings; 
@property (nonatomic,retain) CKDPUserPrivacySettings * userPrivacySettings;              //@synthesize userPrivacySettings=_userPrivacySettings - In the implementation block
+(Class)applicationBundleType;
-(id)dictionaryRepresentation;
-(BOOL)hasApplicationContainer;
-(void)setApplicationContainerEnvironment:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)applicationContainer;
-(id)description;
-(int)applicationContainerEnvironment;
-(void)setApplicationContainer:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasApplicationContainerEnvironment;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasApplicationContainerEnvironment:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addApplicationBundle:(id)arg1 ;
-(unsigned long long)applicationBundlesCount;
-(void)clearApplicationBundles;
-(id)applicationBundleAtIndex:(unsigned long long)arg1 ;
-(void)setUserPrivacySettings:(CKDPUserPrivacySettings *)arg1 ;
-(id)applicationContainerEnvironmentAsString:(int)arg1 ;
-(int)StringAsApplicationContainerEnvironment:(id)arg1 ;
-(BOOL)hasUserPrivacySettings;
-(NSMutableArray *)applicationBundles;
-(void)setApplicationBundles:(NSMutableArray *)arg1 ;
-(CKDPUserPrivacySettings *)userPrivacySettings;
@end

