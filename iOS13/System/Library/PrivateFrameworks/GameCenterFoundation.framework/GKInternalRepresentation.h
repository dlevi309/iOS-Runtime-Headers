/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
+(id)codedPropertyKeys;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_gkDescriptionWithChildren:(int)arg1 ;
-(id)serverRepresentation;
-(id)descriptionSubstitutionMap;
-(void)mergePropertiesFrom:(id)arg1 ;
@end

