/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <Foundation/NSLayoutConstraint.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSNumber;

@interface _UISystemBaselineConstraint : NSLayoutConstraint <NSCoding> {

	NSNumber* _spacingMultiplier;

}

@property (nonatomic,retain) NSNumber * spacingMultiplier;              //@synthesize spacingMultiplier=_spacingMultiplier - In the implementation block
+(id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 withSystemSpacingMultipliedBy:(double)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSpacingMultiplier:(NSNumber *)arg1 ;
-(NSNumber *)spacingMultiplier;
@end

