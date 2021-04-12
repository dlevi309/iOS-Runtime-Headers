/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSArray, GEOJunction, NSString, NSDictionary;

@interface MNGuidanceSignDescription : NSObject <NSSecureCoding> {

	int _shieldID;
	int _composedGuidanceEventIndex;
	NSUUID* _uniqueID;
	NSArray* _titles;
	NSArray* _details;
	GEOJunction* _junction;
	NSString* _shieldText;
	NSString* _shieldStringID;
	NSDictionary* _variableOverrides;
	long long _distanceDetailLevel;

}

@property (nonatomic,readonly) NSUUID * uniqueID;                             //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) NSArray * titles;                              //@synthesize titles=_titles - In the implementation block
@property (nonatomic,readonly) NSArray * details;                             //@synthesize details=_details - In the implementation block
@property (nonatomic,readonly) NSDictionary * variableOverrides;              //@synthesize variableOverrides=_variableOverrides - In the implementation block
@property (nonatomic,readonly) long long distanceDetailLevel;                 //@synthesize distanceDetailLevel=_distanceDetailLevel - In the implementation block
@property (nonatomic,readonly) GEOJunction * junction;                        //@synthesize junction=_junction - In the implementation block
@property (nonatomic,readonly) NSString * shieldText;                         //@synthesize shieldText=_shieldText - In the implementation block
@property (nonatomic,readonly) int shieldID;                                  //@synthesize shieldID=_shieldID - In the implementation block
@property (nonatomic,readonly) NSString * shieldStringID;                     //@synthesize shieldStringID=_shieldStringID - In the implementation block
@property (nonatomic,readonly) int composedGuidanceEventIndex;                //@synthesize composedGuidanceEventIndex=_composedGuidanceEventIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uniqueID;
-(NSArray *)details;
-(NSArray *)titles;
-(NSString *)shieldText;
-(GEOJunction *)junction;
-(int)shieldID;
-(NSString *)shieldStringID;
-(long long)distanceDetailLevel;
-(NSDictionary *)variableOverrides;
-(int)composedGuidanceEventIndex;
-(id)initWithID:(id)arg1 titles:(id)arg2 details:(id)arg3 variableOverrides:(id)arg4 distanceDetailLevel:(int)arg5 junction:(id)arg6 shieldText:(id)arg7 shieldID:(int)arg8 shieldStringID:(id)arg9 composedGuidanceEventIndex:(int)arg10 ;
@end

