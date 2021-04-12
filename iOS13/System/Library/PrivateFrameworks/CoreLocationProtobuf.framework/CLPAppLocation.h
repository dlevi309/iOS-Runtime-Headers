/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CLPLocation;

@interface CLPAppLocation : PBCodable <NSCopying> {

	double _age;
	NSString* _appBundleId;
	int _appState;
	CLPLocation* _location;
	int _loiType;
	int _routineMode;
	int _serverHash;
	SCD_Struct_CL2 _has;

}

@property (nonatomic,retain) NSString * appBundleId;              //@synthesize appBundleId=_appBundleId - In the implementation block
@property (assign,nonatomic) int appState;                        //@synthesize appState=_appState - In the implementation block
@property (assign,nonatomic) BOOL hasAge; 
@property (assign,nonatomic) double age;                          //@synthesize age=_age - In the implementation block
@property (nonatomic,retain) CLPLocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasServerHash; 
@property (assign,nonatomic) int serverHash;                      //@synthesize serverHash=_serverHash - In the implementation block
@property (assign,nonatomic) BOOL hasRoutineMode; 
@property (assign,nonatomic) int routineMode;                     //@synthesize routineMode=_routineMode - In the implementation block
@property (assign,nonatomic) BOOL hasLoiType; 
@property (assign,nonatomic) int loiType;                         //@synthesize loiType=_loiType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)appState;
-(CLPLocation *)location;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(CLPLocation *)arg1 ;
-(int)loiType;
-(void)setLoiType:(int)arg1 ;
-(void)setHasLoiType:(BOOL)arg1 ;
-(BOOL)hasLoiType;
-(double)age;
-(void)setAge:(double)arg1 ;
-(void)setHasAge:(BOOL)arg1 ;
-(BOOL)hasAge;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(void)setRoutineMode:(int)arg1 ;
-(int)routineMode;
-(void)setServerHash:(int)arg1 ;
-(void)setHasServerHash:(BOOL)arg1 ;
-(BOOL)hasServerHash;
-(void)setHasRoutineMode:(BOOL)arg1 ;
-(BOOL)hasRoutineMode;
-(void)setAppState:(int)arg1 ;
-(int)serverHash;
@end

