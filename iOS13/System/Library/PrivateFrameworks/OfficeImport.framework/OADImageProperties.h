/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

