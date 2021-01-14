/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MPAVController *)player;
-(void)setPlayer:(id)arg1;
-(id)delegate;
-(MPAVItem *)item;
-(void)setItem:(id)arg1;
-(void)setDelegate:(id)arg1;
-(UIView *)view;
-(long long)orientation;
-(void)clearWeakReferencesToObject:(id)arg1;
-(void)noteIgnoredChangeTypes:(unsigned long long)arg1;
-(void)setOrientation:(long long)arg1 animate:(BOOL)arg2;
-(void)setOrientation:(long long)arg1;

@end

