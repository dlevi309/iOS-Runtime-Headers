/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
*/

#import <GameCenterUICore/GameCenterUICore-Structs.h>
#import <GameCenterUICore/GKImageBrush.h>
#import <libobjc.A.dylib/GKBrushIdentification.h>

@class NSString;

@interface GKMacGameIconBrush : GKImageBrush <GKBrushIdentification> {

	CGSize _outputSize;

}

@property (assign,nonatomic) CGSize outputSize;                     //@synthesize outputSize=_outputSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)sizeForInput:(id)arg1 ;
-(void)setOutputSize:(CGSize)arg1 ;
-(CGSize)outputSize;
-(id)renderedImageIdentifier;
@end

