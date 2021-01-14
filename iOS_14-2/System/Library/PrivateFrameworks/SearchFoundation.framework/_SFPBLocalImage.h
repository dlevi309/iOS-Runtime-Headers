/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBLocalImage.h>
@class NSData;


@protocol _SFPBLocalImage <NSObject>
@property (assign,nonatomic) int localImageType; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(int)localImageType;
-(void)setLocalImageType:(int)arg1;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface _SFPBLocalImage : PBCodable <_SFPBLocalImage, NSSecureCoding> {

	int _localImageType;

}

@property (assign,nonatomic) int localImageType;                    //@synthesize localImageType=_localImageType - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(id)initWithFacade:(id)arg1 ;
-(int)localImageType;
-(void)setLocalImageType:(int)arg1 ;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

