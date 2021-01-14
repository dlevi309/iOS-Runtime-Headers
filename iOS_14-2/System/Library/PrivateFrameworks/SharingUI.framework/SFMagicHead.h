/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <UIKitCore/UIView.h>

@protocol SFMagicHeadDelegate;
@class UIView, SFMagicHeadShadowView, SFPersonImageView, SFCircleProgressView, NSArray, NSObject, SFMagicHeadSettings, SFAirDropNode, UIAirDropNode, NSUUID, NSProgress;

@interface SFMagicHead : UIView {

	double _containerRadius;
	UIView* _contentView;
	SFMagicHeadShadowView* _shadowView;
	SFPersonImageView* _imageView;
	SFCircleProgressView* _circleProgressView;
	NSArray* _progressKeyPaths;
	long long _cellState;
	BOOL _isMagicHead;
	BOOL _pointedAt;
	BOOL _stateBeingRestored;
	NSObject*<SFMagicHeadDelegate> _delegate;
	SFMagicHeadSettings* _settings;
	SFAirDropNode* _node;
	UIAirDropNode* _slotNode;
	NSUUID* _nodeIdentifier;
	double _degreeOffset;
	long long _size;
	long long _position;
	NSProgress* _progress;
	UIView* _imageSlotView;

}

@property (nonatomic,readonly) UIView * imageSlotView;                    //@synthesize imageSlotView=_imageSlotView - In the implementation block
@property (__weak) NSObject*<SFMagicHeadDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SFMagicHeadSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (readonly) SFAirDropNode * node;                                //@synthesize node=_node - In the implementation block
@property (readonly) UIAirDropNode * slotNode;                            //@synthesize slotNode=_slotNode - In the implementation block
@property (nonatomic,readonly) NSUUID * nodeIdentifier;                   //@synthesize nodeIdentifier=_nodeIdentifier - In the implementation block
@property (assign,nonatomic) BOOL highlighted; 
@property (readonly) double degreeOffset;                                 //@synthesize degreeOffset=_degreeOffset - In the implementation block
@property (assign) BOOL pointedAt;                                        //@synthesize pointedAt=_pointedAt - In the implementation block
@property (assign,nonatomic) long long size;                              //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) long long position;                          //@synthesize position=_position - In the implementation block
@property (assign) BOOL stateBeingRestored;                               //@synthesize stateBeingRestored=_stateBeingRestored - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                       //@synthesize progress=_progress - In the implementation block
-(long long)position;
-(NSUUID *)nodeIdentifier;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(NSObject*<SFMagicHeadDelegate>)delegate;
-(SFAirDropNode *)node;
-(long long)size;
-(BOOL)highlighted;
-(void)setSize:(long long)arg1 ;
-(void)setSettings:(SFMagicHeadSettings *)arg1 ;
-(void)setDelegate:(NSObject*<SFMagicHeadDelegate>)arg1 ;
-(void)userDidCancel;
-(UIView *)imageSlotView;
-(SFMagicHeadSettings *)settings;
-(BOOL)stateBeingRestored;
-(void)setStateBeingRestored:(BOOL)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIAirDropNode *)slotNode;
-(BOOL)pointedAt;
-(void)setPointedAt:(BOOL)arg1 ;
-(id)initWithNode:(id)arg1 slotNode:(id)arg2 containerRadius:(double)arg3 delegate:(id)arg4 settings:(id)arg5 ;
-(void)setPositionDegreeOffsetWithOffset:(double)arg1 ;
-(void)resetTransferState;
-(void)userDidSelect;
-(void)removeObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2 ;
-(void)addObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2 ;
-(void)triggerKVOForKeyPaths:(id)arg1 ofObject:(id)arg2 ;
-(void)setCellState:(long long)arg1 animated:(BOOL)arg2 silent:(BOOL)arg3 ;
-(void)handleKVOUpdateForProgress:(id)arg1 keyPath:(id)arg2 ;
-(void)setPosition:(long long)arg1 withOffset:(double)arg2 ;
-(double)degreeOffset;
@end

