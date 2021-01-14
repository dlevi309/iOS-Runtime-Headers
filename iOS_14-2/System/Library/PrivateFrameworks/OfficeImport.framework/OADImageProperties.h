/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADGraphicProperties.h>

@class OADImageFill;

@interface OADImageProperties : OADGraphicProperties {

	OADImageFill* mImageFill;

}
+(id)defaultProperties;
-(id)description;
-(id)imageFill;
-(BOOL)hasImageFill;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(void)setImageFill:(id)arg1 ;
@end

