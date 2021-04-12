/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore
*/


#import <WorkflowUICore/WorkflowUICore-Structs.h>
@class UIView, UIBarButtonItem;

@interface WFAlertPresentationSource : NSObject {

	BOOL _canOverlapSourceViewRect;
	UIView* _sourceView;
	UIBarButtonItem* _barButtonItem;
	unsigned long long _permittedArrowDirections;
	CGRect _sourceRect;

}

@property (nonatomic,readonly) CGRect sourceRect;                                      //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,readonly) UIView * sourceView;                                    //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * barButtonItem;                        //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (assign,nonatomic) unsigned long long permittedArrowDirections;              //@synthesize permittedArrowDirections=_permittedArrowDirections - In the implementation block
@property (assign,nonatomic) BOOL canOverlapSourceViewRect;                            //@synthesize canOverlapSourceViewRect=_canOverlapSourceViewRect - In the implementation block
+(id)sourceWithView:(id)arg1 ;
+(id)sourceWithView:(id)arg1 rect:(CGRect)arg2 ;
+(id)sourceWithBarButtonItem:(id)arg1 ;
-(UIBarButtonItem *)barButtonItem;
-(id)init;
-(UIView *)sourceView;
-(void)setCanOverlapSourceViewRect:(BOOL)arg1 ;
-(CGRect)sourceRect;
-(unsigned long long)permittedArrowDirections;
-(BOOL)canOverlapSourceViewRect;
-(void)setPermittedArrowDirections:(unsigned long long)arg1 ;
-(id)initWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 barButtonItem:(id)arg3 ;
@end

