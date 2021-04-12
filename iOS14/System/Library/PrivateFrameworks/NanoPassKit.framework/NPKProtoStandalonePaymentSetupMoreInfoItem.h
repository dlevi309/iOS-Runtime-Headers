/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NPKProtoStandalonePaymentSetupMoreInfoItem : PBCodable <NSCopying> {

	NSString* _body;
	NSData* _imageData;
	NSString* _imageURL;
	NSString* _linkText;
	NSString* _linkURL;
	NSString* _title;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasBody; 
@property (nonatomic,retain) NSString * body;                  //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkText; 
@property (nonatomic,retain) NSString * linkText;              //@synthesize linkText=_linkText - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkURL; 
@property (nonatomic,retain) NSString * linkURL;               //@synthesize linkURL=_linkURL - In the implementation block
@property (nonatomic,readonly) BOOL hasImageURL; 
@property (nonatomic,retain) NSString * imageURL;              //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) BOOL hasImageData; 
@property (nonatomic,retain) NSData * imageData;               //@synthesize imageData=_imageData - In the implementation block
-(void)setBody:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setImageURL:(NSString *)arg1 ;
-(NSString *)body;
-(BOOL)hasBody;
-(BOOL)hasTitle;
-(NSString *)linkURL;
-(void)setTitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)linkText;
-(void)setLinkText:(NSString *)arg1 ;
-(id)description;
-(NSData *)imageData;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)imageURL;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasImageURL;
-(BOOL)hasImageData;
-(void)setLinkURL:(NSString *)arg1 ;
-(BOOL)hasLinkText;
-(BOOL)hasLinkURL;
@end

