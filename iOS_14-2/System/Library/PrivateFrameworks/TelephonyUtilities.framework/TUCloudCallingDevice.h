/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface TUCloudCallingDevice : NSObject <NSSecureCoding, NSCopying> {

	BOOL _defaultPairedDevice;
	BOOL _supportsRestrictingSecondaryCalling;
	NSString* _name;
	NSString* _modelIdentifier;
	NSString* _uniqueID;
	NSArray* _linkedUserURIs;

}

@property (nonatomic,copy) NSString * name;                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * modelIdentifier;                                           //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (nonatomic,copy) NSString * uniqueID;                                                  //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) NSArray * linkedUserURIs;                                             //@synthesize linkedUserURIs=_linkedUserURIs - In the implementation block
@property (assign,getter=isDefaultPairedDevice,nonatomic) BOOL defaultPairedDevice;              //@synthesize defaultPairedDevice=_defaultPairedDevice - In the implementation block
@property (assign,nonatomic) BOOL supportsRestrictingSecondaryCalling;                           //@synthesize supportsRestrictingSecondaryCalling=_supportsRestrictingSecondaryCalling - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(NSArray *)linkedUserURIs;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setDefaultPairedDevice:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)modelIdentifier;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isDefaultPairedDevice;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setModelIdentifier:(NSString *)arg1 ;
-(BOOL)supportsRestrictingSecondaryCalling;
-(void)setLinkedUserURIs:(NSArray *)arg1 ;
-(void)setSupportsRestrictingSecondaryCalling:(BOOL)arg1 ;
@end

