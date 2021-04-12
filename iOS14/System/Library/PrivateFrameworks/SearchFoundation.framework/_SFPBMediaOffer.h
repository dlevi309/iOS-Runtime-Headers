/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMediaOffer.h>
@class _SFPBActionItem, NSString, _SFPBImage, NSData;


@protocol _SFPBMediaOffer <NSObject>
@property (nonatomic,retain) _SFPBActionItem * actionItem; 
@property (nonatomic,copy) NSString * sublabel; 
@property (nonatomic,copy) NSString * offerIdentifier; 
@property (assign,nonatomic) BOOL isEnabled; 
@property (nonatomic,retain) _SFPBImage * image; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setIsEnabled:(BOOL)arg1;
-(void)setImage:(id)arg1;
-(void)setSublabel:(id)arg1;
-(NSData *)jsonData;
-(_SFPBActionItem *)actionItem;
-(void)setActionItem:(id)arg1;
-(_SFPBImage *)image;
-(id)initWithDictionary:(id)arg1;
-(NSString *)sublabel;
-(BOOL)isEnabled;
-(NSString *)offerIdentifier;
-(id)initWithJSON:(id)arg1;
-(void)setOfferIdentifier:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBActionItem, NSString, _SFPBImage, NSData;

@interface _SFPBMediaOffer : PBCodable <_SFPBMediaOffer, NSSecureCoding> {

	BOOL _isEnabled;
	_SFPBActionItem* _actionItem;
	NSString* _sublabel;
	NSString* _offerIdentifier;
	_SFPBImage* _image;

}

@property (nonatomic,retain) _SFPBActionItem * actionItem;              //@synthesize actionItem=_actionItem - In the implementation block
@property (nonatomic,copy) NSString * sublabel;                         //@synthesize sublabel=_sublabel - In the implementation block
@property (nonatomic,copy) NSString * offerIdentifier;                  //@synthesize offerIdentifier=_offerIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                            //@synthesize isEnabled=_isEnabled - In the implementation block
@property (nonatomic,retain) _SFPBImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)setImage:(_SFPBImage *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(void)setSublabel:(NSString *)arg1 ;
-(NSData *)jsonData;
-(_SFPBActionItem *)actionItem;
-(void)setActionItem:(_SFPBActionItem *)arg1 ;
-(_SFPBImage *)image;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)sublabel;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isEnabled;
-(void)writeTo:(id)arg1 ;
-(NSString *)offerIdentifier;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOfferIdentifier:(NSString *)arg1 ;
@end

