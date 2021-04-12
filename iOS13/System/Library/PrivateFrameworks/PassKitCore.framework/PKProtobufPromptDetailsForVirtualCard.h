/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKProtobufPromptDetailsForVirtualCard : PBCodable <NSCopying> {

	NSString* _identifier;
	BOOL _showNotification;
	SCD_Struct_PK13 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasShowNotification; 
@property (assign,nonatomic) BOOL showNotification;                 //@synthesize showNotification=_showNotification - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setShowNotification:(BOOL)arg1 ;
-(void)setHasShowNotification:(BOOL)arg1 ;
-(BOOL)hasShowNotification;
-(BOOL)showNotification;
@end

