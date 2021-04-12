/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFActionItem.h>
#import <libobjc.A.dylib/SFMediaOffer.h>
@class SFActionItem, NSString, SFImage, NSDictionary, NSData;


@protocol SFMediaOffer <SFActionItem>
@property (nonatomic,retain) SFActionItem * actionItem; 
@property (nonatomic,copy) NSString * sublabel; 
@property (nonatomic,copy) NSString * offerIdentifier; 
@property (assign,nonatomic) BOOL isEnabled; 
@property (nonatomic,retain) SFImage * image; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)isEnabled;
-(SFImage *)image;
-(void)setImage:(id)arg1;
-(NSData *)jsonData;
-(SFActionItem *)actionItem;
-(void)setActionItem:(id)arg1;
-(NSString *)sublabel;
-(void)setSublabel:(id)arg1;
-(NSString *)offerIdentifier;
-(void)setOfferIdentifier:(id)arg1;
-(void)setIsEnabled:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFActionItem, NSString, SFImage, NSDictionary, NSData, NSArray, SFPunchout, SFLatLng, NSURL;

@interface SFMediaOffer : SFActionItem <SFMediaOffer, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	BOOL _isEnabled;
	SFActionItem* _actionItem;
	NSString* _sublabel;
	NSString* _offerIdentifier;
	SFImage* _image;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * labelForLocalMedia; 
@property (assign,nonatomic) BOOL isOverlay; 
@property (nonatomic,copy) NSArray * storeIdentifiers; 
@property (assign,nonatomic) BOOL requiresLocalMedia; 
@property (nonatomic,copy) NSString * localMediaIdentifier; 
@property (nonatomic,retain) SFPunchout * punchout; 
@property (nonatomic,copy) NSString * applicationBundleIdentifier; 
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSString * email; 
@property (nonatomic,copy) NSData * mapsData; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (nonatomic,copy) NSString * provider; 
@property (nonatomic,copy) NSString * offerType; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) NSString * labelITunes; 
@property (assign,nonatomic) BOOL isITunes; 
@property (nonatomic,retain) SFImage * icon; 
@property (nonatomic,retain) SFImage * baseIcon; 
@property (nonatomic,retain) SFLatLng * location; 
@property (nonatomic,copy) NSString * messageIdentifier; 
@property (nonatomic,copy) NSURL * messageURL; 
@property (nonatomic,copy) NSString * persistentID; 
@property (assign,nonatomic) int mediaEntityType; 
@property (nonatomic,copy) NSString * universalLibraryID; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,retain) SFActionItem * actionItem;                              //@synthesize actionItem=_actionItem - In the implementation block
@property (nonatomic,copy) NSString * sublabel;                                      //@synthesize sublabel=_sublabel - In the implementation block
@property (nonatomic,copy) NSString * offerIdentifier;                               //@synthesize offerIdentifier=_offerIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                                         //@synthesize isEnabled=_isEnabled - In the implementation block
@property (nonatomic,retain) SFImage * image;                                        //@synthesize image=_image - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)isEnabled;
-(SFImage *)image;
-(void)setImage:(SFImage *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(SFActionItem *)actionItem;
-(void)setActionItem:(SFActionItem *)arg1 ;
-(NSString *)sublabel;
-(void)setSublabel:(NSString *)arg1 ;
-(NSString *)offerIdentifier;
-(void)setOfferIdentifier:(NSString *)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(BOOL)hasIsEnabled;
@end

