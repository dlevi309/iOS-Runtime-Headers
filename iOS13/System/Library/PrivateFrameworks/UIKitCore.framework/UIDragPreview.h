/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSValue, UIView, UIDragPreviewParameters, NSDictionary, _DUIPreview;

@interface UIDragPreview : NSObject <NSCopying> {

	NSValue* _preferredAnchorPoint;
	BOOL _preventAfterScreenUpdatesSnapshot;
	BOOL _avoidAnimation;
	UIView* _view;
	UIDragPreviewParameters* _parameters;
	NSDictionary* __springboardParameters;

}

@property (assign,setter=_setPreventAfterScreenUpdatesSnapshot:,getter=_preventAfterScreenUpdatesSnapshot,nonatomic) BOOL preventAfterScreenUpdatesSnapshot;              //@synthesize preventAfterScreenUpdatesSnapshot=_preventAfterScreenUpdatesSnapshot - In the implementation block
@property (assign,nonatomic) BOOL avoidAnimation;                                                                                                                         //@synthesize avoidAnimation=_avoidAnimation - In the implementation block
@property (assign,nonatomic) CGPoint preferredAnchorPoint; 
@property (nonatomic,readonly) _DUIPreview * _duiPreview; 
@property (assign,nonatomic) BOOL _springboardPlatterStyle; 
@property (nonatomic,copy) NSDictionary * _springboardParameters;                                                                                                         //@synthesize _springboardParameters=__springboardParameters - In the implementation block
@property (nonatomic,readonly) UIView * view;                                                                                                                             //@synthesize view=_view - In the implementation block
@property (nonatomic,copy,readonly) UIDragPreviewParameters * parameters;                                                                                                 //@synthesize parameters=_parameters - In the implementation block
+(CGSize)textBoundingSize;
+(CGSize)defaultBoundingSize;
+(id)previewForURL:(id)arg1 title:(id)arg2 ;
+(id)previewForURL:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIDragPreviewParameters *)parameters;
-(UIView *)view;
-(id)initWithView:(id)arg1 ;
-(id)initWithView:(id)arg1 parameters:(id)arg2 ;
-(_DUIPreview *)_duiPreview;
-(void)set_springboardPlatterStyle:(BOOL)arg1 ;
-(BOOL)_springboardPlatterStyle;
-(BOOL)avoidAnimation;
-(void)setAvoidAnimation:(BOOL)arg1 ;
-(NSDictionary *)_springboardParameters;
-(BOOL)_preventAfterScreenUpdatesSnapshot;
-(void)set_springboardParameters:(NSDictionary *)arg1 ;
-(void)_setPreventAfterScreenUpdatesSnapshot:(BOOL)arg1 ;
-(CGPoint)preferredAnchorPoint;
-(void)setPreferredAnchorPoint:(CGPoint)arg1 ;
@end

