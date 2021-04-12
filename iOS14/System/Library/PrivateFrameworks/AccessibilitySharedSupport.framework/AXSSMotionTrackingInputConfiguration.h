/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSSet, NSDictionary;

@interface AXSSMotionTrackingInputConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allowSeparateInputForExpressions;
	NSArray* _orderedInputPreference;
	NSSet* _allowedTrackingTypes;

}

@property (nonatomic,copy,readonly) NSDictionary * plistDictionary; 
@property (nonatomic,copy) NSArray * orderedInputPreference;                             //@synthesize orderedInputPreference=_orderedInputPreference - In the implementation block
@property (nonatomic,copy) NSSet * allowedTrackingTypes;                                 //@synthesize allowedTrackingTypes=_allowedTrackingTypes - In the implementation block
@property (assign,nonatomic) BOOL allowSeparateInputForExpressions;                      //@synthesize allowSeparateInputForExpressions=_allowSeparateInputForExpressions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * orderedCameraInputPreference; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)plistDictionary;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPlistDictionary:(id)arg1 ;
-(NSArray *)orderedInputPreference;
-(NSSet *)allowedTrackingTypes;
-(BOOL)allowSeparateInputForExpressions;
-(BOOL)isEqualToMotionTrackingInputConfiguration:(id)arg1 ;
-(id)initWithOrderedInputPreference:(id)arg1 allowedTrackingTypes:(id)arg2 allowSeparateInputForExpressions:(BOOL)arg3 ;
-(NSArray *)orderedCameraInputPreference;
-(BOOL)supportsTrackingType:(unsigned long long)arg1 ;
-(void)setOrderedInputPreference:(NSArray *)arg1 ;
-(void)setAllowedTrackingTypes:(NSSet *)arg1 ;
-(void)setAllowSeparateInputForExpressions:(BOOL)arg1 ;
@end

