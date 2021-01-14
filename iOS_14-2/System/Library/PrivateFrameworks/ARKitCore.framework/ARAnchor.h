/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARDaemonSecureCoding.h>
#import <ARKitCore/ARAnchorCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface ARAnchor : NSObject <ARDaemonSecureCoding, ARAnchorCopying, NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _name;
	NSUUID* _sessionIdentifier;
	double _lastUpdateTimestamp;
	SCD_Struct_AR1 _transform;
	SCD_Struct_AR1 _referenceTransform;

}

@property (nonatomic,retain) NSUUID * sessionIdentifier;                     //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 transform;                       //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 referenceTransform;              //@synthesize referenceTransform=_referenceTransform - In the implementation block
@property (assign,nonatomic) double lastUpdateTimestamp;                     //@synthesize lastUpdateTimestamp=_lastUpdateTimestamp - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)debugQuickLookObject;
-(id)initWithAnchor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTransform:(SCD_Struct_AR1)arg1 ;
-(void)setSessionIdentifier:(NSUUID *)arg1 ;
-(SCD_Struct_AR1)transform;
-(NSString *)name;
-(NSUUID *)sessionIdentifier;
-(id)description;
-(id)initWithTransform:(SCD_Struct_AR1)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_description:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLastUpdateTimestamp:(double)arg1 ;
-(double)lastUpdateTimestamp;
-(BOOL)isEqualToAnchor:(id)arg1 ;
-(SCD_Struct_AR1)referenceTransform;
-(id)initWithName:(id)arg1 transform:(SCD_Struct_AR1)arg2 ;
-(id)initWithIdentifier:(id)arg1 transform:(SCD_Struct_AR1)arg2 ;
-(void)setReferenceTransform:(SCD_Struct_AR1)arg1 ;
@end

