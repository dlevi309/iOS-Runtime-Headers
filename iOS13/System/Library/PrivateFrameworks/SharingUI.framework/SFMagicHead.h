/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSObject*<SFMagicHeadDelegate>)delegate;
-(void)setDelegate:(NSObject*<SFMagicHeadDelegate>)arg1 ;
-(long long)size;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(long long)position;
-(SFAirDropNode *)node;
-(void)setSize:(long long)arg1 ;
-(SFMagicHeadSettings *)settings;
-(void)setSettings:(SFMagicHeadSettings *)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
-(NSUUID *)nodeIdentifier;
-(UIView *)imageSlotView;
-(BOOL)stateBeingRestored;
-(void)setStateBeingRestored:(BOOL)arg1 ;
-(void)userDidCancel;
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

