/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMessageAttachment.h>
@class _SFPBURL, NSData;


@protocol _SFPBMessageAttachment <NSObject>
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) _SFPBURL * url; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(void)setType:(int)arg1;
-(_SFPBURL *)url;
-(id)initWithDictionary:(id)arg1;
-(void)setUrl:(id)arg1;
-(int)type;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBURL, NSData, NSString;

@interface _SFPBMessageAttachment : PBCodable <_SFPBMessageAttachment, NSSecureCoding> {

	int _type;
	_SFPBURL* _url;

}

@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) _SFPBURL * url;                        //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(void)setType:(int)arg1 ;
-(_SFPBURL *)url;
-(id)initWithDictionary:(id)arg1 ;
-(void)setUrl:(_SFPBURL *)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

