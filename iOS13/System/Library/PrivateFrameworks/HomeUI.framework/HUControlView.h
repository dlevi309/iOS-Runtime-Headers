/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class NSString;


@protocol HUControlView <NSObject>
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic,__weak) id<HUControlViewDelegate> delegate; 
@property (nonatomic,retain) id value; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL canBeHighlighted; 
@optional
-(BOOL)canBeHighlighted;
-(void)setCanBeHighlighted:(BOOL)arg1;

@required
+(Class)valueClass;
-(id<HUControlViewDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSString *)identifier;
-(id)value;
-(void)setValue:(id)arg1;
-(void)setIdentifier:(id)arg1;
-(BOOL)isDisabled;
-(void)setDisabled:(BOOL)arg1;

@end

