/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class MPAVItem, MPAVController, UIView;


@protocol MPControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id delegate; 
@property (nonatomic,retain) MPAVItem * item; 
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,retain) MPAVController * player; 
@property (nonatomic,retain,readonly) UIView * view; 
@required
-(id)delegate;
-(void)setDelegate:(id)arg1;
-(MPAVItem *)item;
-(void)setItem:(id)arg1;
-(long long)orientation;
-(void)setOrientation:(long long)arg1;
-(UIView *)view;
-(MPAVController *)player;
-(void)setPlayer:(id)arg1;
-(void)clearWeakReferencesToObject:(id)arg1;
-(void)noteIgnoredChangeTypes:(unsigned long long)arg1;
-(void)setOrientation:(long long)arg1 animate:(BOOL)arg2;

@end

