/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <CoreChart/CoreChart-Structs.h>
#import <libobjc.A.dylib/CCVegaMarkDefInterface.h>

@class CCVegaCARenderer;

@interface CCVegaMarkDef : NSObject <CCVegaMarkDefInterface> {

	CCVegaCARenderer* delegate;

}

@property (__weak) CCVegaCARenderer * delegate; 
-(CCVegaCARenderer *)delegate;
-(void)setDelegate:(CCVegaCARenderer *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(CGRect)accessibilityFrameForMark:(id)arg1 layer:(id)arg2 ;
-(id)enterMark:(id)arg1 ;
-(id)updateMark:(id)arg1 ;
-(BOOL)isMultiItemMark;
-(id)enterMultiMark:(id)arg1 ;
-(id)updateMultiMark:(id)arg1 ;
@end

