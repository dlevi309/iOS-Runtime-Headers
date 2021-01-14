/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentBlueprint.h>

@class SXLayoutBlueprint;

@interface SXContainerComponentBlueprint : SXComponentBlueprint {

	SXLayoutBlueprint* _layoutBlueprint;

}

@property (nonatomic,retain) SXLayoutBlueprint * layoutBlueprint;              //@synthesize layoutBlueprint=_layoutBlueprint - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(SXLayoutBlueprint *)layoutBlueprint;
-(void)setParentLayoutBlueprint:(id)arg1 ;
-(void)setLayoutBlueprint:(SXLayoutBlueprint *)arg1 ;
@end

