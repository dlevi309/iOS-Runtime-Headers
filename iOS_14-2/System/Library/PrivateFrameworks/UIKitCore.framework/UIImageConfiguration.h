/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIImageConfiguration.h>
@class UITraitCollection;


@protocol UIImageConfiguration <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@required
-(UITraitCollection *)traitCollection;
-(id)configurationWithTraitCollection:(id)arg1;
-(id)configurationByApplyingConfiguration:(id)arg1;
-(BOOL)isEquivalentToConfiguration:(id)arg1;

@end

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UITraitCollection, NSString;

@interface UIImageConfiguration : NSObject <UIImageConfiguration, NSCopying, NSSecureCoding> {

	BOOL _ignoresDynamicType;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,readonly) BOOL _ignoresDynamicType;                         //@synthesize ignoresDynamicType=_ignoresDynamicType - In the implementation block
@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)_ignoresDynamicType;
-(UITraitCollection *)traitCollection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithTraitCollection:(id)arg1 ;
-(NSString *)description;
-(id)configurationWithTraitCollection:(id)arg1 ;
-(id)configurationByApplyingConfiguration:(id)arg1 ;
-(BOOL)isEquivalentToConfiguration:(id)arg1 ;
-(void)_applyConfigurationValuesTo:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_shouldApplyConfiguration:(id)arg1 ;
-(id)_init;
-(BOOL)_isUnspecified;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_configurationIgnoringDynamicType;
-(BOOL)isEqual:(id)arg1 ;
@end

