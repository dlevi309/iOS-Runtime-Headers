/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString, CUIRenditionKey;

@interface CUIRenditionLayerReference : NSObject {

	CGRect _frame;
	NSString* _layerName;
	double _opacity;
	int _blendMode;
	BOOL _fixedFrame;
	BOOL _makeOpaqueIfPossible;
	CUIRenditionKey* _referenceKey;

}

@property (assign,nonatomic) CGRect frame;                                //@synthesize frame=_frame - In the implementation block
@property (nonatomic,copy) NSString * layerName;                          //@synthesize layerName=_layerName - In the implementation block
@property (assign,nonatomic) double opacity;                              //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                               //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) BOOL fixedFrame;                             //@synthesize fixedFrame=_fixedFrame - In the implementation block
@property (assign,nonatomic) BOOL makeOpaqueIfPossible;                   //@synthesize makeOpaqueIfPossible=_makeOpaqueIfPossible - In the implementation block
@property (nonatomic,retain) CUIRenditionKey * referenceKey;              //@synthesize referenceKey=_referenceKey - In the implementation block
-(id)init;
-(void)dealloc;
-(CGRect)frame;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CUIRenditionKey *)referenceKey;
-(void)setReferenceKey:(CUIRenditionKey *)arg1 ;
-(int)blendMode;
-(BOOL)fixedFrame;
-(void)setFixedFrame:(BOOL)arg1 ;
-(void)setBlendMode:(int)arg1 ;
-(NSString *)layerName;
-(void)setLayerName:(NSString *)arg1 ;
-(BOOL)makeOpaqueIfPossible;
-(void)setMakeOpaqueIfPossible:(BOOL)arg1 ;
@end

