/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIImageConfiguration.h>
@class UITraitCollection;


@protocol UIImageConfiguration <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@required
-(UITraitCollection *)traitCollection;
-(id)configurationByApplyingConfiguration:(id)arg1;
-(id)configurationWithTraitCollection:(id)arg1;
-(BOOL)isEquivalentToConfiguration:(id)arg1;

@end

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UITraitCollection, NSString;

@interface UIImageConfiguration : NSObject <UIImageConfiguration, NSCopying, NSSecureCoding> {

	BOOL _ignoresDynamicType;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_completeConfiguration:(id)arg1 fromConfiguration:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(UITraitCollection *)traitCollection;
-(id)_configurationIgnoringDynamicType;
-(id)configurationByApplyingConfiguration:(id)arg1 ;
-(id)configurationWithTraitCollection:(id)arg1 ;
-(BOOL)_isUnspecified;
-(BOOL)isEquivalentToConfiguration:(id)arg1 ;
-(id)_initWithTraitCollection:(id)arg1 ;
-(BOOL)_shouldApplyConfiguration:(id)arg1 ;
-(void)_applyConfigurationValuesTo:(id)arg1 ;
@end

