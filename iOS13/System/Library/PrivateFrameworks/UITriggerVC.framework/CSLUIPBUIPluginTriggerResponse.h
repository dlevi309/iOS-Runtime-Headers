/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(NSString *)errorString;
-(void)setErrorString:(NSString *)arg1 ;
-(BOOL)hasErrorString;
@end

