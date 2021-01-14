/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData, RTAddress, NSString, RTLocation, RTMapItemExtendedAttributes, NSDate;

@interface RTMapItem : NSObject <NSCopying, NSSecureCoding> {

	BOOL _disputed;
	NSUUID* _identifier;
	NSData* _geoMapItemHandle;
	unsigned long long _source;
	RTAddress* _address;
	NSString* _name;
	unsigned long long _muid;
	long long _resultProviderID;
	RTLocation* _location;
	NSString* _displayLanguage;
	RTMapItemExtendedAttributes* _extendedAttributes;
	NSDate* _creationDate;
	NSDate* _expirationDate;
	double _weight;

}

@property (nonatomic,retain) RTMapItemExtendedAttributes * extendedAttributes;              //@synthesize extendedAttributes=_extendedAttributes - In the implementation block
@property (assign,nonatomic) unsigned long long source;                                     //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                       //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                                     //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) double weight;                                               //@synthesize weight=_weight - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSData * geoMapItemHandle;                                   //@synthesize geoMapItemHandle=_geoMapItemHandle - In the implementation block
@property (nonatomic,readonly) RTAddress * address;                                         //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long muid;                                     //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) long long resultProviderID;                                  //@synthesize resultProviderID=_resultProviderID - In the implementation block
@property (nonatomic,readonly) RTLocation * location;                                       //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayLanguage;                             //@synthesize displayLanguage=_displayLanguage - In the implementation block
@property (nonatomic,readonly) BOOL disputed;                                               //@synthesize disputed=_disputed - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sourceToString:(unsigned long long)arg1 ;
+(double)weightForSource:(unsigned long long)arg1 ;
+(double)weightForExtendedAttributes:(id)arg1 ;
+(BOOL)hasKnownTypeItem:(id)arg1 ;
-(long long)resultProviderID;
-(long long)compare:(id)arg1 ;
-(void)setExtendedAttributes:(RTMapItemExtendedAttributes *)arg1 ;
-(id)init;
-(BOOL)isEqualToMapItem:(id)arg1 ;
-(RTLocation *)location;
-(BOOL)disputed;
-(void)encodeWithCoder:(id)arg1 ;
-(double)weight;
-(BOOL)validMUID;
-(void)updateWeightWithSource:(unsigned long long)arg1 extendedAttributes:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 address:(id)arg3 location:(id)arg4 source:(unsigned long long)arg5 muid:(unsigned long long)arg6 resultProviderID:(long long)arg7 geoMapItemHandle:(id)arg8 creationDate:(id)arg9 expirationDate:(id)arg10 extendedAttributes:(id)arg11 displayLanguage:(id)arg12 disputed:(BOOL)arg13 ;
-(void)setSource:(unsigned long long)arg1 ;
-(NSString *)name;
-(NSData *)geoMapItemHandle;
-(id)description;
-(NSDate *)creationDate;
-(RTAddress *)address;
-(NSDate *)expirationDate;
-(NSString *)displayLanguage;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)muid;
-(NSUUID *)identifier;
-(RTMapItemExtendedAttributes *)extendedAttributes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)source;
@end

