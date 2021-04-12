/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTitle;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(NSString *)imageURL;
-(NSData *)imageData;
-(BOOL)hasBody;
-(void)setImageData:(NSData *)arg1 ;
-(NSString *)linkURL;
-(void)setImageURL:(NSString *)arg1 ;
-(void)setLinkURL:(NSString *)arg1 ;
-(NSString *)linkText;
-(BOOL)hasImageData;
-(void)setLinkText:(NSString *)arg1 ;
-(BOOL)hasImageURL;
-(BOOL)hasLinkText;
-(BOOL)hasLinkURL;
@end

