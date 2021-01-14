/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoPasscodeUpgradeFlowShouldExitRequest : PBRequest <NSCopying> {

	NSData* _errorData;
	BOOL _passcodeChanged;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasPasscodeChanged; 
@property (assign,nonatomic) BOOL passcodeChanged;                 //@synthesize passcodeChanged=_passcodeChanged - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorData; 
@property (nonatomic,retain) NSData * errorData;                   //@synthesize errorData=_errorData - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)errorData;
-(void)setErrorData:(NSData *)arg1 ;
-(BOOL)hasErrorData;
-(void)setPasscodeChanged:(BOOL)arg1 ;
-(void)setHasPasscodeChanged:(BOOL)arg1 ;
-(BOOL)hasPasscodeChanged;
-(BOOL)passcodeChanged;
@end

