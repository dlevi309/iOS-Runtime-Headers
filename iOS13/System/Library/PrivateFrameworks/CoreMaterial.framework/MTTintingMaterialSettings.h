/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * tintColorDescription;              //@synthesize tintColorDescription=_tintColorDescription - In the implementation block
@property (nonatomic,readonly) CGColorRef tintColor;                                  //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) double tintAlpha;                                      //@synthesize tintAlpha=_tintAlpha - In the implementation block
-(void)dealloc;
-(CGColorRef)tintColor;
-(NSDictionary *)tintColorDescription;
-(double)tintAlpha;
-(void)_processTintingDescription:(id)arg1 defaultingToIdentity:(BOOL)arg2 ;
-(id)initWithTintingDescription:(id)arg1 andDescendantDescriptions:(id)arg2 ;
@end

