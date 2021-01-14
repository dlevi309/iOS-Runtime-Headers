/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/

#import <CoreMaterial/CoreMaterial-Structs.h>
#import <libobjc.A.dylib/MTTinting.h>

@class NSDictionary, NSString;

@interface MTTintingMaterialSettings : NSObject <MTTinting> {

	NSDictionary* _tintColorDescription;
	CGColorRef _tintColor;
	double _tintAlpha;

}

@property (nonatomic,copy,readonly) NSDictionary * tintColorDescription;              //@synthesize tintColorDescription=_tintColorDescription - In the implementation block
@property (nonatomic,readonly) CGColorRef tintColor;                                  //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) double tintAlpha;                                      //@synthesize tintAlpha=_tintAlpha - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_processTintingDescription:(id)arg1 defaultingToIdentity:(BOOL)arg2 ;
-(id)initWithTintingDescription:(id)arg1 andDescendantDescriptions:(id)arg2 ;
-(double)tintAlpha;
-(CGColorRef)tintColor;
-(void)dealloc;
-(NSDictionary *)tintColorDescription;
@end

