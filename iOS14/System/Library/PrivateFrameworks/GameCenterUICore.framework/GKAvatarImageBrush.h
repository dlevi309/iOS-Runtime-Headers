/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
*/

#import <GameCenterUICore/GKImageBrush.h>
#import <libobjc.A.dylib/GKBrushIdentification.h>

@class NSString;

@interface GKAvatarImageBrush : GKImageBrush <GKBrushIdentification> {

	long long _dimension;

}

@property (assign,nonatomic) long long dimension;                   //@synthesize dimension=_dimension - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)dimension;
-(void)setDimension:(long long)arg1 ;
-(id)renderedImageIdentifier;
@end

