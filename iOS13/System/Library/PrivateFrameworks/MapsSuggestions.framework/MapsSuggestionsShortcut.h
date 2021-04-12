/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID, GEOMapItemStorage, NSArray;

@interface MapsSuggestionsShortcut : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isHidden;
	long long _type;
	NSString* _identifier;
	NSUUID* _storageIdentifier;
	NSString* _customName;
	GEOMapItemStorage* _geoMapItem;
	NSString* _originatingAddressString;
	NSArray* _contacts;

}

@property (nonatomic,copy) NSArray * contacts;                               //@synthesize contacts=_contacts - In the implementation block
@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSUUID * storageIdentifier;                       //@synthesize storageIdentifier=_storageIdentifier - In the implementation block
@property (nonatomic,copy) NSString * customName;                            //@synthesize customName=_customName - In the implementation block
@property (nonatomic,copy) GEOMapItemStorage * geoMapItem;                   //@synthesize geoMapItem=_geoMapItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (assign,nonatomic) BOOL isHidden;                                  //@synthesize isHidden=_isHidden - In the implementation block
@property (nonatomic,copy) NSString * originatingAddressString;              //@synthesize originatingAddressString=_originatingAddressString - In the implementation block
@property (nonatomic,readonly) BOOL isBackedPlaceholder; 
@property (nonatomic,readonly) BOOL isSetupPlaceholder; 
+(BOOL)supportsSecureCoding;
+(id)shortcutWithData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)_name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)data;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)_isPlaceholder;
-(BOOL)isHidden;
-(id)_originalName;
-(NSString *)subtitle;
-(NSArray *)contacts;
-(void)setIsHidden:(BOOL)arg1 ;
-(GEOMapItemStorage *)geoMapItem;
-(void)setContacts:(NSArray *)arg1 ;
-(void)addContact:(id)arg1 ;
-(NSUUID *)storageIdentifier;
-(void)setStorageIdentifier:(NSUUID *)arg1 ;
-(void)setCustomName:(NSString *)arg1 ;
-(void)setOriginatingAddressString:(NSString *)arg1 ;
-(NSString *)customName;
-(NSString *)originatingAddressString;
-(void)setGeoMapItem:(GEOMapItemStorage *)arg1 ;
-(void)removeContact:(id)arg1 ;
-(id)initBackedPlaceholderWithType:(long long)arg1 identifier:(id)arg2 originatingAddress:(id)arg3 customName:(id)arg4 ;
-(BOOL)isSetupPlaceholder;
-(BOOL)isEqualToShortcut:(id)arg1 ;
-(BOOL)isBackedPlaceholder;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 geoMapItem:(id)arg3 customName:(id)arg4 ;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 geoMapItem:(id)arg3 customName:(id)arg4 contacts:(id)arg5 isHidden:(BOOL)arg6 originatingAddress:(id)arg7 ;
-(id)initWithType:(long long)arg1 geoMapItem:(id)arg2 customName:(id)arg3 ;
-(id)initWithGEOMapItem:(id)arg1 customName:(id)arg2 ;
-(id)initBackedPlaceholderWithType:(long long)arg1 identifier:(id)arg2 customName:(id)arg3 ;
-(id)initSetupPlaceholderOfType:(long long)arg1 ;
-(id)initWithPinnedPlace:(id)arg1 ;
-(int)pinnedStorageType;
-(BOOL)isEqualToPinnedPlace:(id)arg1 ;
@end

