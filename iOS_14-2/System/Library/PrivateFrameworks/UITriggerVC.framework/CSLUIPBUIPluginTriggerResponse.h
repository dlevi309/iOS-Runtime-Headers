/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
*/

#import <UITriggerVC/UITriggerVC-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CSLUIPBUIPluginTriggerResponse : PBCodable <NSCopying> {

	NSString* _errorString;
	BOOL _success;

}

@property (assign,nonatomic) BOOL success;                        //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorString; 
@property (nonatomic,retain) NSString * errorString;              //@synthesize errorString=_errorString - In the implementation block
-(BOOL)success;
-(id)dictionaryRepresentation;
-(void)setSuccess:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)errorString;
-(void)setErrorString:(NSString *)arg1 ;
-(BOOL)hasErrorString;
@end

