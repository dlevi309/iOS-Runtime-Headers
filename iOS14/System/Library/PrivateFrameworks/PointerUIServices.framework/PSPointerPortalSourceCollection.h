/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PointerUIServices.framework/PointerUIServices
*/

#import <PointerUIServices/PointerUIServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PSPortalSource, PSMatchMoveSource;

@interface PSPointerPortalSourceCollection : NSObject <NSCopying, NSSecureCoding> {

	PSPortalSource* _overlayEffectPortalSource;
	PSPortalSource* _pointerPortalSource;
	PSMatchMoveSource* _samplingMatchMoveSource;

}

@property (nonatomic,copy,readonly) PSPortalSource * overlayEffectPortalSource;               //@synthesize overlayEffectPortalSource=_overlayEffectPortalSource - In the implementation block
@property (nonatomic,copy,readonly) PSPortalSource * pointerPortalSource;                     //@synthesize pointerPortalSource=_pointerPortalSource - In the implementation block
@property (nonatomic,copy,readonly) PSMatchMoveSource * samplingMatchMoveSource;              //@synthesize samplingMatchMoveSource=_samplingMatchMoveSource - In the implementation block
+(BOOL)supportsSecureCoding;
-(PSPortalSource *)pointerPortalSource;
-(PSPortalSource *)overlayEffectPortalSource;
-(PSMatchMoveSource *)samplingMatchMoveSource;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPointerPortalSource:(id)arg1 overlayEffectPortalSource:(id)arg2 samplingMatchMoveSource:(id)arg3 ;
@end

