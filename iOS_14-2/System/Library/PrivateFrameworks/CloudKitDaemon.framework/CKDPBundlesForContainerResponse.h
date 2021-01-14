/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPBundlesForContainerResponse : PBCodable <NSCopying> {

	NSMutableArray* _bundleIDs;

}

@property (nonatomic,retain) NSMutableArray * bundleIDs;              //@synthesize bundleIDs=_bundleIDs - In the implementation block
+(Class)bundleIDType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)bundleIDs;
-(void)setBundleIDs:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addBundleID:(id)arg1 ;
-(unsigned long long)bundleIDsCount;
-(void)clearBundleIDs;
-(id)bundleIDAtIndex:(unsigned long long)arg1 ;
@end

