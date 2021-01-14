/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface VCPBIntentDefinition : PBCodable <NSCopying> {

	NSString* _associatedBundleID;
	NSMutableArray* _files;

}

@property (nonatomic,retain) NSString * associatedBundleID;              //@synthesize associatedBundleID=_associatedBundleID - In the implementation block
@property (nonatomic,retain) NSMutableArray * files;                     //@synthesize files=_files - In the implementation block
+(Class)filesType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)files;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addFiles:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFiles:(NSMutableArray *)arg1 ;
-(unsigned long long)filesCount;
-(void)clearFiles;
-(id)filesAtIndex:(unsigned long long)arg1 ;
-(NSString *)associatedBundleID;
-(void)setAssociatedBundleID:(NSString *)arg1 ;
@end

