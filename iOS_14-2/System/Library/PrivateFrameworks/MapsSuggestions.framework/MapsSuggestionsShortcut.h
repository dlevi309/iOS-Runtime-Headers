/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID, GEOMapItemStorage, NSArray;

@interface MapsSuggestionsShortcut : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isHidden;
	BOOL _derivedFromMeCard;
	long long _type;
	NSString* _identifier;
	NSUUID* _storageIdentifier;
	NSString* _customName;
	GEOMapItemStorage* _geoMapItem;
	NSString* _originatingAddressString;
	NSArray* _contacts;

}

@property (assign,setter=setSource:,getter=source,nonatomic) long long source; 
@property (nonatomic,copy) NSArray * contacts;                                              //@synthesize contacts=_contacts - In the implementation block
@property (assign,nonatomic) long long type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSUUID * storageIdentifier;                                      //@synthesize storageIdentifier=_storageIdentifier - In the implementation block
@property (nonatomic,copy) NSString * customName;                                           //@synthesize customName=_customName - In the implementation block
@property (nonatomic,copy) GEOMapItemStorage * geoMapItem;                                  //@synthesize geoMapItem=_geoMapItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (assign,nonatomic) BOOL isHidden;                                                 //@synthesize isHidden=_isHidden - In the implementation block
@property (nonatomic,copy) NSString * originatingAddressString;                             //@synthesize originatingAddressString=_originatingAddressString - In the implementation block
@property (nonatomic,readonly) BOOL isBackedPlaceholder; 
@property (nonatomic,readonly) BOOL isSetupPlaceholder; 
@property (assign,nonatomic) BOOL derivedFromMeCard;                                        //@synthesize derivedFromMeCard=_derivedFromMeCard - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortcutWithData:(id)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)contacts;
-(BOOL)isHidden;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)addContact:(id)arg1 ;
-(void)setSource:(long long)arg1 ;
-(void)setGeoMapItem:(GEOMapItemStorage *)arg1 ;
-(id)description;
-(NSString *)customName;
-(id)initBackedPlaceholderWithType:(long long)arg1 identifier:(id)arg2 originatingAddress:(id)arg3 customName:(id)arg4 ;
-(void)setStorageIdentifier:(NSUUID *)arg1 ;
-(id)data;
-(void)setCustomName:(NSString *)arg1 ;
-(id)initWithFavoriteItem:(id)arg1 ;
-(NSUUID *)storageIdentifier;
-(id)identifierForStorage;
-(BOOL)isEqualToFavoriteItem:(id)arg1 ;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 geoMapItem:(id)arg3 customName:(id)arg4 contacts:(id)arg5 isHidden:(BOOL)arg6 originatingAddress:(id)arg7 ;
-(BOOL)derivedFromMeCard;
-(void)setDerivedFromMeCard:(BOOL)arg1 ;
-(BOOL)isSetupPlaceholder;
-(BOOL)isEqualToShortcut:(id)arg1 ;
-(BOOL)isBackedPlaceholder;
-(void)setOriginatingAddressString:(NSString *)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 geoMapItem:(id)arg3 customName:(id)arg4 ;
-(id)initWithType:(long long)arg1 geoMapItem:(id)arg2 customName:(id)arg3 ;
-(id)initWithGEOMapItem:(id)arg1 customName:(id)arg2 ;
-(id)initSetupPlaceholderOfType:(long long)arg1 ;
-(id)initBackedPlaceholderWithType:(long long)arg1 identifier:(id)arg2 customName:(id)arg3 ;
-(GEOMapItemStorage *)geoMapItem;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)removeContact:(id)arg1 ;
-(void)setIsHidden:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)originatingAddressString;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(long long)source;
@end

