/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(BOOL)hasBundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(unsigned long long)syncCommandsCount;
-(id)syncCommandsAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addSyncCommands:(id)arg1 ;
-(void)clearSyncCommands;
-(NSMutableArray *)syncCommands;
-(void)setSyncCommands:(NSMutableArray *)arg1 ;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

