/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSTextContainer, NSDictionary;


@protocol NSUITextViewCommonMethods <NSTextLayoutOrientationProvider,NSTextContainerView>
@property (assign,nonatomic,__weak) NSTextContainer * textContainer; 
@property (assign,nonatomic) NSRange markedRange; 
@property (nonatomic,readonly) NSDictionary * markedTextStyle; 
@optional
-(NSTextContainer *)textContainer;
-(NSRange)markedRange;
-(NSDictionary *)markedTextStyle;
-(void)setTextContainer:(id)arg1;
-(void)setMarkedRange:(NSRange)arg1;

@required
-(CGRect*)visibleRect;
-(CGPoint*)textContainerOrigin;
-(void)invalidateTextContainerOrigin;
-(void)setConstrainedFrameSize:(CGSize)arg1;
-(void)setNeedsDisplayInRect:(CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2;
-(UIEdgeInsets*)textContainerInset;
-(CGSize*)minSize;
-(BOOL)isHorizontallyResizable;

@end

