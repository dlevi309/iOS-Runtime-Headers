/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBRemoteExecutionEvent : PBCodable <NSCopying> {

	NSString* _actionIdentifier;
	NSString* _connectionType;
	NSString* _destinationType;
	NSString* _key;
	NSString* _source;
	BOOL _completed;
	SCD_Struct_WF8 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) NSString * source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL hasActionIdentifier; 
@property (nonatomic,retain) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationType; 
@property (nonatomic,retain) NSString * destinationType;               //@synthesize destinationType=_destinationType - In the implementation block
@property (nonatomic,readonly) BOOL hasConnectionType; 
@property (nonatomic,retain) NSString * connectionType;                //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasCompleted; 
@property (assign,nonatomic) BOOL completed;                           //@synthesize completed=_completed - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(BOOL)hasSource;
-(NSString *)connectionType;
-(void)setConnectionType:(NSString *)arg1 ;
-(NSString *)destinationType;
-(BOOL)completed;
-(BOOL)hasConnectionType;
-(void)mergeFrom:(id)arg1 ;
-(void)setDestinationType:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(id)description;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)hasCompleted;
-(void)setHasCompleted:(BOOL)arg1 ;
-(NSString *)key;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasDestinationType;
-(NSString *)actionIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)source;
-(BOOL)hasActionIdentifier;
@end

