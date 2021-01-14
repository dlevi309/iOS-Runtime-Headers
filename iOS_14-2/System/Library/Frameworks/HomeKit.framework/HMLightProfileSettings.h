/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface HMLightProfileSettings : NSObject <HMFObject, NSSecureCoding> {

	BOOL _naturalLightingEnabled;
	unsigned long long _supportedFeatures;

}

@property (getter=isNaturalLightingEnabled,readonly) BOOL naturalLightingEnabled;              //@synthesize naturalLightingEnabled=_naturalLightingEnabled - In the implementation block
@property (readonly) unsigned long long supportedFeatures;                                     //@synthesize supportedFeatures=_supportedFeatures - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(NSString *)privateDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(NSString *)description;
-(unsigned long long)supportedFeatures;
-(NSArray *)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isNaturalLightingEnabled;
-(id)initWithSupportedFeatures:(unsigned long long)arg1 naturalLightingEnabled:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

