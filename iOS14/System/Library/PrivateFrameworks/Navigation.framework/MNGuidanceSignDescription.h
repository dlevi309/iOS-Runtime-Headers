/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEOTransitArtworkDataSource;
@class NSUUID, NSArray, GEOJunction, NSString, NSDictionary;

@interface MNGuidanceSignDescription : NSObject <NSSecureCoding> {

	int _shieldID;
	int _composedGuidanceEventIndex;
	NSUUID* _uniqueID;
	NSArray* _titles;
	NSArray* _details;
	GEOJunction* _junction;
	id<GEOTransitArtworkDataSource> _artworkOverride;
	NSString* _shieldText;
	NSString* _shieldStringID;
	NSDictionary* _variableOverrides;
	long long _distanceDetailLevel;

}

@property (nonatomic,readonly) NSUUID * uniqueID;                                            //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) NSArray * titles;                                             //@synthesize titles=_titles - In the implementation block
@property (nonatomic,readonly) NSArray * details;                                            //@synthesize details=_details - In the implementation block
@property (nonatomic,readonly) NSDictionary * variableOverrides;                             //@synthesize variableOverrides=_variableOverrides - In the implementation block
@property (nonatomic,readonly) long long distanceDetailLevel;                                //@synthesize distanceDetailLevel=_distanceDetailLevel - In the implementation block
@property (nonatomic,readonly) GEOJunction * junction;                                       //@synthesize junction=_junction - In the implementation block
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artworkOverride;              //@synthesize artworkOverride=_artworkOverride - In the implementation block
@property (nonatomic,readonly) NSString * shieldText;                                        //@synthesize shieldText=_shieldText - In the implementation block
@property (nonatomic,readonly) int shieldID;                                                 //@synthesize shieldID=_shieldID - In the implementation block
@property (nonatomic,readonly) NSString * shieldStringID;                                    //@synthesize shieldStringID=_shieldStringID - In the implementation block
@property (nonatomic,readonly) int composedGuidanceEventIndex;                               //@synthesize composedGuidanceEventIndex=_composedGuidanceEventIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)uniqueID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(GEOJunction *)junction;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)shieldText;
-(NSArray *)titles;
-(id<GEOTransitArtworkDataSource>)artworkOverride;
-(NSArray *)details;
-(int)shieldID;
-(NSString *)shieldStringID;
-(long long)distanceDetailLevel;
-(NSDictionary *)variableOverrides;
-(int)composedGuidanceEventIndex;
-(id)initWithID:(id)arg1 titles:(id)arg2 details:(id)arg3 variableOverrides:(id)arg4 distanceDetailLevel:(int)arg5 junction:(id)arg6 artworkOverride:(id)arg7 shieldText:(id)arg8 shieldID:(int)arg9 shieldStringID:(id)arg10 composedGuidanceEventIndex:(int)arg11 ;
@end

