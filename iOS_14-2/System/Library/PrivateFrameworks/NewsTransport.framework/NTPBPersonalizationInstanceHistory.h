/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBPersonalizationInstanceHistory : PBCodable <NSCopying> {

	unsigned long long _lastChangeNumber;
	NSString* _instanceIdentifier;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasInstanceIdentifier; 
@property (nonatomic,retain) NSString * instanceIdentifier;                    //@synthesize instanceIdentifier=_instanceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasLastChangeNumber; 
@property (assign,nonatomic) unsigned long long lastChangeNumber;              //@synthesize lastChangeNumber=_lastChangeNumber - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasLastChangeNumber:(BOOL)arg1 ;
-(BOOL)hasLastChangeNumber;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)instanceIdentifier;
-(void)setInstanceIdentifier:(NSString *)arg1 ;
-(BOOL)hasInstanceIdentifier;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)lastChangeNumber;
-(void)setLastChangeNumber:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

