/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLogMsgEventUserAction : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _userActionEventKey;
	NSString* _userActionEventValue;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _userActionEventAction;
	int _userActionEventTarget;
	struct {
		unsigned has_userActionEventAction : 1;
		unsigned has_userActionEventTarget : 1;
		unsigned read_userActionEventKey : 1;
		unsigned read_userActionEventValue : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasUserActionEventKey; 
@property (nonatomic,retain) NSString * userActionEventKey; 
@property (nonatomic,readonly) BOOL hasUserActionEventValue; 
@property (nonatomic,retain) NSString * userActionEventValue; 
@property (assign,nonatomic) BOOL hasUserActionEventTarget; 
@property (assign,nonatomic) int userActionEventTarget; 
@property (assign,nonatomic) BOOL hasUserActionEventAction; 
@property (assign,nonatomic) int userActionEventAction; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasUserActionEventValue;
-(id)userActionEventTargetAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(NSString *)userActionEventKey;
-(id)init;
-(id)jsonRepresentation;
-(int)userActionEventTarget;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasUserActionEventKey;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasUserActionEventTarget;
-(id)description;
-(int)StringAsUserActionEventAction:(id)arg1 ;
-(void)setUserActionEventTarget:(int)arg1 ;
-(id)userActionEventActionAsString:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasUserActionEventTarget:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUserActionEventAction:(int)arg1 ;
-(int)StringAsUserActionEventTarget:(id)arg1 ;
-(void)setUserActionEventValue:(NSString *)arg1 ;
-(NSString *)userActionEventValue;
-(int)userActionEventAction;
-(BOOL)hasUserActionEventAction;
-(void)setHasUserActionEventAction:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserActionEventKey:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

