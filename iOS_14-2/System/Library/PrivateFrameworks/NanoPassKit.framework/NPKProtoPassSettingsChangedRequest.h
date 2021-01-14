/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoPassSettingsChangedRequest : PBRequest <NSCopying> {

	unsigned long long _passSettings;
	NSString* _uniqueID;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,readonly) BOOL hasUniqueID; 
@property (nonatomic,retain) NSString * uniqueID;                          //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,nonatomic) BOOL hasPassSettings; 
@property (assign,nonatomic) unsigned long long passSettings;              //@synthesize passSettings=_passSettings - In the implementation block
-(id)dictionaryRepresentation;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasUniqueID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPassSettings:(unsigned long long)arg1 ;
-(BOOL)hasPassSettings;
-(unsigned long long)passSettings;
-(void)setHasPassSettings:(BOOL)arg1 ;
@end

