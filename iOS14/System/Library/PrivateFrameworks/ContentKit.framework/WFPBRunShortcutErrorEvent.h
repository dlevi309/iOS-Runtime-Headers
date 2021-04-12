/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBRunShortcutErrorEvent : PBCodable <NSCopying> {

	NSString* _actionIdentifier;
	NSString* _errorCode;
	NSString* _errorDomain;
	NSString* _key;
	BOOL _didRunRemotely;
	SCD_Struct_WF8 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                   //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                     //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasActionIdentifier; 
@property (nonatomic,retain) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDidRunRemotely; 
@property (assign,nonatomic) BOOL didRunRemotely;                      //@synthesize didRunRemotely=_didRunRemotely - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(NSString *)errorDomain;
-(BOOL)hasErrorDomain;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)errorCode;
-(BOOL)hasErrorCode;
-(id)description;
-(NSString *)key;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)actionIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(BOOL)didRunRemotely;
-(void)setDidRunRemotely:(BOOL)arg1 ;
-(BOOL)hasActionIdentifier;
-(void)setHasDidRunRemotely:(BOOL)arg1 ;
-(BOOL)hasDidRunRemotely;
@end

