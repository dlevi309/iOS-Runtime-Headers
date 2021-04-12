/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
*/

#import <SymptomPresentationFeed/SymptomPresentationFeed-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSPredicate, NWNetworkAdviceUpdate, NSDate, NSArray;

@interface NWNetworkOfInterest : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isAny;
	BOOL _isBuiltin;
	BOOL _isTrafficEligible;
	BOOL _willGetDiscretionaryTrafficInvites;
	BOOL _discretionaryTrafficInvited;
	long long _interface;
	NSPredicate* _customSignature;
	long long _considerAlternate;
	NWNetworkAdviceUpdate* _considerAlternateUpdate;
	long long _linkQuality;
	long long _powerCostDL;
	long long _powerCostUL;
	NSDate* _predictionsGeneratedAt;
	NSArray* _predictions;
	long long _version;
	long long _scopedToLOI;
	long long _flags;

}

@property (readonly) long long version;                                          //@synthesize version=_version - In the implementation block
@property (readonly) long long scopedToLOI;                                      //@synthesize scopedToLOI=_scopedToLOI - In the implementation block
@property (readonly) long long flags;                                            //@synthesize flags=_flags - In the implementation block
@property (assign) BOOL isTrafficEligible;                                       //@synthesize isTrafficEligible=_isTrafficEligible - In the implementation block
@property (assign) BOOL willGetDiscretionaryTrafficInvites;                      //@synthesize willGetDiscretionaryTrafficInvites=_willGetDiscretionaryTrafficInvites - In the implementation block
@property (assign) BOOL discretionaryTrafficInvited;                             //@synthesize discretionaryTrafficInvited=_discretionaryTrafficInvited - In the implementation block
@property (assign) long long considerAlternate;                                  //@synthesize considerAlternate=_considerAlternate - In the implementation block
@property (retain) NWNetworkAdviceUpdate * considerAlternateUpdate;              //@synthesize considerAlternateUpdate=_considerAlternateUpdate - In the implementation block
@property (assign) long long linkQuality;                                        //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign) long long powerCostDL;                                        //@synthesize powerCostDL=_powerCostDL - In the implementation block
@property (assign) long long powerCostUL;                                        //@synthesize powerCostUL=_powerCostUL - In the implementation block
@property (retain) NSDate * predictionsGeneratedAt;                              //@synthesize predictionsGeneratedAt=_predictionsGeneratedAt - In the implementation block
@property (retain) NSArray * predictions;                                        //@synthesize predictions=_predictions - In the implementation block
@property (readonly) long long interface;                                        //@synthesize interface=_interface - In the implementation block
@property (readonly) BOOL isAny;                                                 //@synthesize isAny=_isAny - In the implementation block
@property (readonly) BOOL isBuiltin;                                             //@synthesize isBuiltin=_isBuiltin - In the implementation block
@property (readonly) NSPredicate * customSignature;                              //@synthesize customSignature=_customSignature - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)flags;
-(long long)version;
-(long long)interface;
-(NSArray *)predictions;
-(long long)linkQuality;
-(void)setLinkQuality:(long long)arg1 ;
-(NSPredicate *)customSignature;
-(BOOL)isAny;
-(BOOL)isBuiltin;
-(long long)scopedToLOI;
-(BOOL)isTrafficEligible;
-(BOOL)willGetDiscretionaryTrafficInvites;
-(BOOL)discretionaryTrafficInvited;
-(long long)considerAlternate;
-(NWNetworkAdviceUpdate *)considerAlternateUpdate;
-(long long)powerCostDL;
-(long long)powerCostUL;
-(NSDate *)predictionsGeneratedAt;
-(id)_descriptionFull:(BOOL)arg1 ;
-(BOOL)_isEqualToNOI:(id)arg1 ;
-(id)initWithSpec:(long long)arg1 isAny:(BOOL)arg2 isBuiltin:(BOOL)arg3 scopedToLOI:(long long)arg4 flags:(long long)arg5 hasCustomSignature:(id)arg6 ;
-(id)typePrettyPrint;
-(BOOL)atHomeScopedNOI;
-(BOOL)atWorkScopedNOI;
-(id)identityAttrsOnly;
-(void)addObserverForAllKeyPaths:(id)arg1 ;
-(void)removeObserverForAllKeyPaths:(id)arg1 ;
-(void)setIsTrafficEligible:(BOOL)arg1 ;
-(void)setWillGetDiscretionaryTrafficInvites:(BOOL)arg1 ;
-(void)setDiscretionaryTrafficInvited:(BOOL)arg1 ;
-(void)setConsiderAlternate:(long long)arg1 ;
-(void)setConsiderAlternateUpdate:(NWNetworkAdviceUpdate *)arg1 ;
-(void)setPowerCostDL:(long long)arg1 ;
-(void)setPowerCostUL:(long long)arg1 ;
-(void)setPredictionsGeneratedAt:(NSDate *)arg1 ;
-(void)setPredictions:(NSArray *)arg1 ;
@end

