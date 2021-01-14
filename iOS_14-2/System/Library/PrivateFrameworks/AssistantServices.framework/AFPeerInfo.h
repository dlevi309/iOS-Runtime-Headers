/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSString;

@interface AFPeerInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	BOOL _isDeviceOwnedByCurrentUser;
	BOOL _isCommunalDevice;
	NSString* _idsIdentifier;
	NSString* _idsDeviceUniqueIdentifier;
	NSString* _rapportEffectiveIdentifier;
	NSString* _mediaSystemIdentifier;
	NSString* _mediaRouteIdentifier;
	NSString* _roomName;
	NSString* _name;
	NSString* _productType;
	NSString* _buildVersion;
	NSString* _userInterfaceIdiom;
	NSString* _aceVersion;

}

@property (nonatomic,readonly) BOOL isDeviceOwnedByCurrentUser;                         //@synthesize isDeviceOwnedByCurrentUser=_isDeviceOwnedByCurrentUser - In the implementation block
@property (nonatomic,copy,readonly) NSString * idsIdentifier;                           //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * idsDeviceUniqueIdentifier;               //@synthesize idsDeviceUniqueIdentifier=_idsDeviceUniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * rapportEffectiveIdentifier;              //@synthesize rapportEffectiveIdentifier=_rapportEffectiveIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaSystemIdentifier;                   //@synthesize mediaSystemIdentifier=_mediaSystemIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaRouteIdentifier;                    //@synthesize mediaRouteIdentifier=_mediaRouteIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isCommunalDevice;                                   //@synthesize isCommunalDevice=_isCommunalDevice - In the implementation block
@property (nonatomic,copy,readonly) NSString * roomName;                                //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * productType;                             //@synthesize productType=_productType - In the implementation block
@property (nonatomic,copy,readonly) NSString * buildVersion;                            //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * userInterfaceIdiom;                      //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (nonatomic,copy,readonly) NSString * aceVersion;                              //@synthesize aceVersion=_aceVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)ad_shortDescription;
-(NSString *)userInterfaceIdiom;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithIsDeviceOwnedByCurrentUser:(BOOL)arg1 idsIdentifier:(id)arg2 idsDeviceUniqueIdentifier:(id)arg3 rapportEffectiveIdentifier:(id)arg4 mediaSystemIdentifier:(id)arg5 mediaRouteIdentifier:(id)arg6 isCommunalDevice:(BOOL)arg7 roomName:(id)arg8 name:(id)arg9 productType:(id)arg10 buildVersion:(id)arg11 userInterfaceIdiom:(id)arg12 aceVersion:(id)arg13 ;
-(NSString *)idsIdentifier;
-(NSString *)productType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)mediaRouteIdentifier;
-(NSString *)name;
-(NSString *)description;
-(NSString *)mediaSystemIdentifier;
-(NSString *)buildVersion;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSString *)roomName;
-(BOOL)isCommunalDevice;
-(id)buildDictionaryRepresentation;
-(BOOL)isDeviceOwnedByCurrentUser;
-(NSString *)aceVersion;
-(NSString *)rapportEffectiveIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)idsDeviceUniqueIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

