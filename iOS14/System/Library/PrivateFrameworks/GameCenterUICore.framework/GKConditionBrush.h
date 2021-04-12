/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
*/

#import <GameCenterUICore/GameCenterUICore-Structs.h>
#import <GameCenterUICore/GKBrush.h>

@class NSPredicate, GKBrush;

@interface GKConditionBrush : GKBrush {

	NSPredicate* _predicate;
	GKBrush* _yesBrush;
	GKBrush* _noBrush;

}

@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) GKBrush * yesBrush;                   //@synthesize yesBrush=_yesBrush - In the implementation block
@property (nonatomic,retain) GKBrush * noBrush;                    //@synthesize noBrush=_noBrush - In the implementation block
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)drawInRect:(CGRect)arg1 withContext:(CGContextRef)arg2 input:(id)arg3 ;
-(CGSize)sizeForInput:(id)arg1 ;
-(GKBrush *)noBrush;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GKBrush *)yesBrush;
-(void)setYesBrush:(GKBrush *)arg1 ;
-(void)setNoBrush:(GKBrush *)arg1 ;
@end

