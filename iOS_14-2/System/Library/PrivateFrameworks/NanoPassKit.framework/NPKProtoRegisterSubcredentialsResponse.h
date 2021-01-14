/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoRegisterSubcredentialsResponse : PBCodable <NSCopying> {

	NSMutableArray* _errorsDatas;
	NSMutableArray* _passesDatas;

}

@property (nonatomic,retain) NSMutableArray * passesDatas;              //@synthesize passesDatas=_passesDatas - In the implementation block
@property (nonatomic,retain) NSMutableArray * errorsDatas;              //@synthesize errorsDatas=_errorsDatas - In the implementation block
+(Class)passesDataType;
+(Class)errorsDataType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addPassesData:(id)arg1 ;
-(void)addErrorsData:(id)arg1 ;
-(unsigned long long)passesDatasCount;
-(void)clearPassesDatas;
-(id)passesDataAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)errorsDatasCount;
-(void)clearErrorsDatas;
-(id)errorsDataAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)passesDatas;
-(void)setPassesDatas:(NSMutableArray *)arg1 ;
-(NSMutableArray *)errorsDatas;
-(void)setErrorsDatas:(NSMutableArray *)arg1 ;
@end

