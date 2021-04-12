/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARAnchorCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface ARAnchor : NSObject <ARAnchorCopying, NSSecureCoding> {

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)initWithTransform:(SCD_Struct_AR1)arg1 ;
-(SCD_Struct_AR1)transform;
-(id)initWithAnchor:(id)arg1 ;
-(id)debugQuickLookObject;
-(void)setTransform:(SCD_Struct_AR1)arg1 ;
-(NSUUID *)sessionIdentifier;
-(void)setSessionIdentifier:(NSUUID *)arg1 ;
-(id)_description:(BOOL)arg1 ;
-(void)setLastUpdateTimestamp:(double)arg1 ;
-(double)lastUpdateTimestamp;
-(BOOL)isEqualToAnchor:(id)arg1 ;
-(SCD_Struct_AR1)referenceTransform;
-(id)initWithName:(id)arg1 transform:(SCD_Struct_AR1)arg2 ;
-(id)initWithIdentifier:(id)arg1 transform:(SCD_Struct_AR1)arg2 ;
-(void)setReferenceTransform:(SCD_Struct_AR1)arg1 ;
@end

