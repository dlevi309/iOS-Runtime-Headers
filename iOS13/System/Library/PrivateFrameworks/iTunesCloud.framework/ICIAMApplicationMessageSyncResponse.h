/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface ICIAMApplicationMessageSyncResponse : PBCodable <NSCopying> {

	NSString* _bundleID;
	NSMutableArray* _syncCommands;

}

@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                        //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSMutableArray * syncCommands;              //@synthesize syncCommands=_syncCommands - In the implementation block
+(Class)syncCommandsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasBundleID;
-(unsigned long long)syncCommandsCount;
-(id)syncCommandsAtIndex:(unsigned long long)arg1 ;
-(void)addSyncCommands:(id)arg1 ;
-(void)clearSyncCommands;
-(NSMutableArray *)syncCommands;
-(void)setSyncCommands:(NSMutableArray *)arg1 ;
@end

