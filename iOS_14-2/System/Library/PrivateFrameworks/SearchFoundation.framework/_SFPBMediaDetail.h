/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMediaDetail.h>
@class NSString, _SFPBText, NSData;


@protocol _SFPBMediaDetail <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) _SFPBText * content; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(_SFPBText *)content;
-(void)setContent:(id)arg1;
-(NSData *)jsonData;
-(void)setTitle:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSString *)title;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBText, NSData;

@interface _SFPBMediaDetail : PBCodable <_SFPBMediaDetail, NSSecureCoding> {

	NSString* _title;
	_SFPBText* _content;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) _SFPBText * content;                   //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(_SFPBText *)content;
-(void)setContent:(_SFPBText *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

