/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphRendererExclusion.h>

@class NSMutableArray, NSString;

@interface HKAxisExclusion : NSObject <HKGraphRendererExclusion> {

	NSMutableArray* _excludedRects;

}

@property (nonatomic,retain) NSMutableArray * excludedRects;              //@synthesize excludedRects=_excludedRects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)excludeRect:(CGRect)arg1 ;
-(NSMutableArray *)excludedRects;
-(void)setExcludedRects:(NSMutableArray *)arg1 ;
@end

