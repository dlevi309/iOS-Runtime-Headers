/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <ATFoundation/ATFoundation-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATPRequest : PBRequest <NSCopying> {

	NSString* _command;
	NSString* _dataClass;

}

@property (nonatomic,readonly) BOOL hasCommand; 
@property (nonatomic,retain) NSString * command;                //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) BOOL hasDataClass; 
@property (nonatomic,retain) NSString * dataClass;              //@synthesize dataClass=_dataClass - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)dataClass;
-(void)setDataClass:(NSString *)arg1 ;
-(void)setCommand:(NSString *)arg1 ;
-(NSString *)command;
-(BOOL)hasCommand;
-(BOOL)hasDataClass;
@end

