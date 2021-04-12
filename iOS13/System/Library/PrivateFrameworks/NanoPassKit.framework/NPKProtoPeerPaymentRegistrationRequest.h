/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoPeerPaymentRegistrationRequest : PBRequest <NSCopying> {

	NSString* _serviceURL;
	BOOL _forceReRegistration;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,readonly) BOOL hasServiceURL; 
@property (nonatomic,retain) NSString * serviceURL;                    //@synthesize serviceURL=_serviceURL - In the implementation block
@property (assign,nonatomic) BOOL hasForceReRegistration; 
@property (assign,nonatomic) BOOL forceReRegistration;                 //@synthesize forceReRegistration=_forceReRegistration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)serviceURL;
-(void)setServiceURL:(NSString *)arg1 ;
-(BOOL)hasServiceURL;
-(void)setForceReRegistration:(BOOL)arg1 ;
-(void)setHasForceReRegistration:(BOOL)arg1 ;
-(BOOL)hasForceReRegistration;
-(BOOL)forceReRegistration;
@end

