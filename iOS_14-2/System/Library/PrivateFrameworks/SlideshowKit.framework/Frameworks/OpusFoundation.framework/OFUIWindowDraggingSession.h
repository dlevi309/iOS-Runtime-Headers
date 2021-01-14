/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/


@protocol OFUIWindowDraggingSource, OFUIWindowDraggingDestination;
#import <OpusFoundation/OpusFoundation-Structs.h>
@class OFUIWindow, NSMutableArray, UIView, UILabel, UIPasteboard, NSMutableDictionary;

@interface OFUIWindowDraggingSession : NSObject {

	OFUIWindow* _window;
	NSMutableArray* _items;
	unsigned long long _animation;
	id<OFUIWindowDraggingSource> _source;
	id<OFUIWindowDraggingDestination> _destination;
	unsigned long long _formation;
	unsigned long long _sourceOperation;
	unsigned long long _destinationOperation;
	BOOL _showBadge;
	UIView* _badgeView;
	UILabel* _badgeLabel;
	unsigned long long _state;
	BOOL _delayUpdates;
	UIView* _presentationView;
	CGSize _presentationViewSize;
	CGPoint _position;
	UIPasteboard* _pasteboard;
	NSMutableDictionary* _pasteboardCache;

}

@property (assign,nonatomic) OFUIWindow * window;                                        //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                                     //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) id<OFUIWindowDraggingSource> source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) id<OFUIWindowDraggingDestination> destination;              //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) unsigned long long sourceOperation;                         //@synthesize sourceOperation=_sourceOperation - In the implementation block
@property (assign,nonatomic) unsigned long long destinationOperation;                    //@synthesize destinationOperation=_destinationOperation - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGPoint position;                                           //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) UIPasteboard * pasteboard;                                  //@synthesize pasteboard=_pasteboard - In the implementation block
@property (assign,nonatomic) unsigned long long animation;                               //@synthesize animation=_animation - In the implementation block
@property (assign,nonatomic) unsigned long long formation;                               //@synthesize formation=_formation - In the implementation block
@property (assign,nonatomic) BOOL showBadge;                                             //@synthesize showBadge=_showBadge - In the implementation block
@property (assign,nonatomic) BOOL delayUpdates;                                          //@synthesize delayUpdates=_delayUpdates - In the implementation block
@property (nonatomic,retain) UIView * presentationView;                                  //@synthesize presentationView=_presentationView - In the implementation block
@property (assign,nonatomic) CGSize presentationViewSize;                                //@synthesize presentationViewSize=_presentationViewSize - In the implementation block
-(void)addItem:(id)arg1 ;
-(CGPoint)position;
-(void)setDestination:(id<OFUIWindowDraggingDestination>)arg1 ;
-(unsigned long long)animation;
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)init;
-(UIPasteboard *)pasteboard;
-(void)setWindow:(OFUIWindow *)arg1 ;
-(unsigned long long)numberOfItems;
-(void)setAnimation:(unsigned long long)arg1 ;
-(UIView *)presentationView;
-(NSMutableArray *)items;
-(void)setSource:(id<OFUIWindowDraggingSource>)arg1 ;
-(void)_updateBadge;
-(OFUIWindow *)window;
-(BOOL)isDragging;
-(void)setState:(unsigned long long)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(unsigned long long)state;
-(unsigned long long)indexOfItem:(id)arg1 ;
-(id<OFUIWindowDraggingDestination>)destination;
-(void)dealloc;
-(void)setShowBadge:(BOOL)arg1 ;
-(id<OFUIWindowDraggingSource>)source;
-(void)moveToPosition:(CGPoint)arg1 ;
-(void)setPresentationView:(UIView *)arg1 ;
-(id)initWithWindow:(id)arg1 items:(id)arg2 position:(CGPoint)arg3 source:(id)arg4 ;
-(void)beginDragging;
-(void)endDragging:(BOOL)arg1 ;
-(void)setPasteboard:(UIPasteboard *)arg1 ;
-(void)updatePresentationViewOrientation:(id)arg1 ;
-(void)_updateView:(id)arg1 orientation:(long long)arg2 animated:(BOOL)arg3 ;
-(id)_hitDestinationInSuperview:(id)arg1 ;
-(void)updateDragging;
-(void)_updatePresentationViewWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)itemsContainObject:(id)arg1 ;
-(void)_updateDraggingInSameWindow;
-(id)_hitDestinationInView:(id)arg1 ;
-(void)_finishPresentationViewWithCompletion:(/*^block*/id)arg1 ;
-(id)objectsForPasteboardType:(id)arg1 transcodeBlock:(/*^block*/id)arg2 cache:(BOOL)arg3 ;
-(unsigned long long)formation;
-(void)setFormation:(unsigned long long)arg1 ;
-(unsigned long long)sourceOperation;
-(void)setSourceOperation:(unsigned long long)arg1 ;
-(unsigned long long)destinationOperation;
-(void)setDestinationOperation:(unsigned long long)arg1 ;
-(BOOL)showBadge;
-(BOOL)delayUpdates;
-(void)setDelayUpdates:(BOOL)arg1 ;
-(CGSize)presentationViewSize;
-(void)setPresentationViewSize:(CGSize)arg1 ;
@end

