/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_userActionEventKey : 1;
		unsigned wrote_userActionEventValue : 1;
		unsigned wrote_userActionEventAction : 1;
		unsigned wrote_userActionEventTarget : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readUserActionEventKey;
-(void)_readUserActionEventValue;
-(NSString *)userActionEventKey;
-(NSString *)userActionEventValue;
-(void)setUserActionEventKey:(NSString *)arg1 ;
-(void)setUserActionEventValue:(NSString *)arg1 ;
-(BOOL)hasUserActionEventKey;
-(BOOL)hasUserActionEventValue;
-(int)userActionEventTarget;
-(void)setUserActionEventTarget:(int)arg1 ;
-(void)setHasUserActionEventTarget:(BOOL)arg1 ;
-(BOOL)hasUserActionEventTarget;
-(id)userActionEventTargetAsString:(int)arg1 ;
-(int)StringAsUserActionEventTarget:(id)arg1 ;
-(int)userActionEventAction;
-(void)setUserActionEventAction:(int)arg1 ;
-(void)setHasUserActionEventAction:(BOOL)arg1 ;
-(BOOL)hasUserActionEventAction;
-(id)userActionEventActionAsString:(int)arg1 ;
-(int)StringAsUserActionEventAction:(id)arg1 ;
@end

