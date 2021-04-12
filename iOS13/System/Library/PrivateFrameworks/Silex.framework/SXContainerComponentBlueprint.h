/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentBlueprint.h>

@class SXLayoutBlueprint;

@interface SXContainerComponentBlueprint : SXComponentBlueprint {

	SXLayoutBlueprint* _parentLayoutBlueprint;
	SXLayoutBlueprint* _layoutBlueprint;

}

@property (nonatomic,retain) SXLayoutBlueprint * layoutBlueprint;              //@synthesize layoutBlueprint=_layoutBlueprint - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(SXLayoutBlueprint *)layoutBlueprint;
-(id)parentLayoutBlueprint;
-(void)setParentLayoutBlueprint:(id)arg1 ;
-(void)setLayoutBlueprint:(SXLayoutBlueprint *)arg1 ;
@end

