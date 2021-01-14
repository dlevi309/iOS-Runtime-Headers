/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
*/

#import <GameCenterUICore/GameCenterUICore-Structs.h>
#import <GameCenterUICore/GKImageBrush.h>
#import <libobjc.A.dylib/GKBrushIdentification.h>

@class NSString;

@interface GKCircleImageBrush : GKImageBrush <GKBrushIdentification> {

	CGSize _sizeOverride;

}

@property (assign,nonatomic) CGSize sizeOverride;                   //@synthesize sizeOverride=_sizeOverride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)scaleForInput:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 withContext:(CGContextRef)arg2 input:(id)arg3 ;
-(CGSize)sizeForInput:(id)arg1 ;
-(void)setSizeOverride:(CGSize)arg1 ;
-(CGSize)sizeOverride;
-(id)renderedImageIdentifier;
@end

