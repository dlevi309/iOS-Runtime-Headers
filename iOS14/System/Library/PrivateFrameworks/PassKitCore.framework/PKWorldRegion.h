/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKWorldRegion : NSObject <NSSecureCoding> {

	unsigned long long _muid;
	int _resultProviderIdentifier;
	unsigned long long _type;
	double _latitude;
	double _longitude;
	double _latitudeDelta;
	double _longitudeDelta;
	NSString* _localizedName;
	NSString* _localeIdentifier;
	PKWorldRegion* _parentRegion;
	NSString* _identifier;
	NSString* _abbreviationCode;

}

@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long muid;                    //@synthesize muid=_muid - In the implementation block
@property (assign,nonatomic) int resultProviderIdentifier;               //@synthesize resultProviderIdentifier=_resultProviderIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * localizedName;                   //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * localeIdentifier;                //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,retain) NSString * abbreviationCode;                //@synthesize abbreviationCode=_abbreviationCode - In the implementation block
@property (assign,nonatomic) SCD_Struct_PK10 displayRegion; 
@property (nonatomic,retain) PKWorldRegion * parentRegion;               //@synthesize parentRegion=_parentRegion - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)mostConstrainingTypeInRegions:(id)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localeIdentifier;
-(void)setDisplayRegion:(SCD_Struct_PK10)arg1 ;
-(NSString *)localizedName;
-(SCD_Struct_PK10)displayRegion;
-(void)setMuid:(unsigned long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)muid;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)searchString;
-(PKWorldRegion *)parentRegion;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(BOOL)isEqualToWorldRegion:(id)arg1 ;
-(NSString *)abbreviationCode;
-(id)regionOfType:(unsigned long long)arg1 ;
-(BOOL)isIncludedInRegions:(id)arg1 ;
-(int)resultProviderIdentifier;
-(void)setResultProviderIdentifier:(int)arg1 ;
-(void)setAbbreviationCode:(NSString *)arg1 ;
-(void)setParentRegion:(PKWorldRegion *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

