/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable <NSCopying> {

	NSMutableArray* _containerPrivacySettings;

}

@property (nonatomic,retain) NSMutableArray * containerPrivacySettings;              //@synthesize containerPrivacySettings=_containerPrivacySettings - In the implementation block
+(Class)containerPrivacySettingsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)containerPrivacySettings;
-(void)addContainerPrivacySettings:(id)arg1 ;
-(unsigned long long)containerPrivacySettingsCount;
-(void)clearContainerPrivacySettings;
-(id)containerPrivacySettingsAtIndex:(unsigned long long)arg1 ;
-(void)setContainerPrivacySettings:(NSMutableArray *)arg1 ;
@end

