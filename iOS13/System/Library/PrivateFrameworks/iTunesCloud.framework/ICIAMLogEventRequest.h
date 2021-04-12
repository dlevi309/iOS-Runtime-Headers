/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface ICIAMLogEventRequest : PBRequest <NSCopying> {

	long long _dSID;
	NSString* _applicationMessageIdentifier;
	NSString* _deviceID;
	NSMutableArray* _eventParameters;
	SCD_Struct_IC7 _has;

}

@property (nonatomic,readonly) BOOL hasApplicationMessageIdentifier; 
@property (nonatomic,retain) NSString * applicationMessageIdentifier;              //@synthesize applicationMessageIdentifier=_applicationMessageIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDSID; 
@property (assign,nonatomic) long long dSID;                                       //@synthesize dSID=_dSID - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceID; 
@property (nonatomic,retain) NSString * deviceID;                                  //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSMutableArray * eventParameters;                     //@synthesize eventParameters=_eventParameters - In the implementation block
+(Class)eventParametersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDeviceID;
-(void)setDSID:(long long)arg1 ;
-(void)setHasDSID:(BOOL)arg1 ;
-(BOOL)hasDSID;
-(long long)dSID;
-(void)addEventParameters:(id)arg1 ;
-(void)setApplicationMessageIdentifier:(NSString *)arg1 ;
-(unsigned long long)eventParametersCount;
-(void)clearEventParameters;
-(id)eventParametersAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasApplicationMessageIdentifier;
-(NSString *)applicationMessageIdentifier;
-(NSMutableArray *)eventParameters;
-(void)setEventParameters:(NSMutableArray *)arg1 ;
@end

