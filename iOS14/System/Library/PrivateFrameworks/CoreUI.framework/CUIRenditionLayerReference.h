/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)blendMode;
-(NSString *)layerName;
-(BOOL)fixedFrame;
-(id)init;
-(void)setFixedFrame:(BOOL)arg1 ;
-(double)opacity;
-(CGRect)frame;
-(void)setOpacity:(double)arg1 ;
-(void)setLayerName:(NSString *)arg1 ;
-(BOOL)makeOpaqueIfPossible;
-(void)setMakeOpaqueIfPossible:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setReferenceKey:(CUIRenditionKey *)arg1 ;
-(void)setBlendMode:(int)arg1 ;
-(CUIRenditionKey *)referenceKey;
-(void)dealloc;
@end

