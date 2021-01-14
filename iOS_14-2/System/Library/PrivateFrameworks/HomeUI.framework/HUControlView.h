/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDisabled:(BOOL)arg1;
-(id<HUControlViewDelegate>)delegate;
-(BOOL)isDisabled;
-(void)setValue:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)setIdentifier:(id)arg1;
-(NSString *)identifier;
-(id)value;

@end

