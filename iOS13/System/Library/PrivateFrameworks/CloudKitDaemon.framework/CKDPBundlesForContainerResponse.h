/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)bundleIDs;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBundleIDs:(NSMutableArray *)arg1 ;
-(void)addBundleID:(id)arg1 ;
-(unsigned long long)bundleIDsCount;
-(void)clearBundleIDs;
-(id)bundleIDAtIndex:(unsigned long long)arg1 ;
@end

