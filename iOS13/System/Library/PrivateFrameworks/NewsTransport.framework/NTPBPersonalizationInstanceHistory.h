/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBPersonalizationInstanceHistory : PBCodable <NSCopying> {

	unsigned long long _lastChangeNumber;
	NSString* _instanceIdentifier;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasInstanceIdentifier; 
@property (nonatomic,retain) NSString * instanceIdentifier;                    //@synthesize instanceIdentifier=_instanceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasLastChangeNumber; 
@property (assign,nonatomic) unsigned long long lastChangeNumber;              //@synthesize lastChangeNumber=_lastChangeNumber - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)instanceIdentifier;
-(void)setInstanceIdentifier:(NSString *)arg1 ;
-(BOOL)hasInstanceIdentifier;
-(unsigned long long)lastChangeNumber;
-(void)setLastChangeNumber:(unsigned long long)arg1 ;
-(void)setHasLastChangeNumber:(BOOL)arg1 ;
-(BOOL)hasLastChangeNumber;
@end

