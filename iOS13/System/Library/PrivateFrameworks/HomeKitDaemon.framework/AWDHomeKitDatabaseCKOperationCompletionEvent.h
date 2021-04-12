/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitDatabaseCKOperationCompletionEvent : PBCodable <NSCopying> {

	long long _errorCode;
	unsigned long long _timestamp;
	int _containerType;
	NSString* _errorDomain;
	BOOL _didSucceed;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDidSucceed; 
@property (assign,nonatomic) BOOL didSucceed;                           //@synthesize didSucceed=_didSucceed - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                       //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasContainerType; 
@property (assign,nonatomic) int containerType;                         //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                    //@synthesize errorDomain=_errorDomain - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)errorCode;
-(NSString *)errorDomain;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(BOOL)hasErrorDomain;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(BOOL)didSucceed;
-(void)setDidSucceed:(BOOL)arg1 ;
-(int)containerType;
-(void)setContainerType:(int)arg1 ;
-(BOOL)hasContainerType;
-(void)setHasContainerType:(BOOL)arg1 ;
-(id)containerTypeAsString:(int)arg1 ;
-(int)StringAsContainerType:(id)arg1 ;
-(void)setHasDidSucceed:(BOOL)arg1 ;
-(BOOL)hasDidSucceed;
@end

