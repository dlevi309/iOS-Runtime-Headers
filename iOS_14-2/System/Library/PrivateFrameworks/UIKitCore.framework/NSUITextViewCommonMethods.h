/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSTextContainer, NSDictionary;


@protocol NSUITextViewCommonMethods <NSTextLayoutOrientationProvider,NSTextContainerView>
@property (assign,nonatomic,__weak) NSTextContainer * textContainer; 
@property (assign,nonatomic) NSRange markedRange; 
@property (nonatomic,readonly) NSDictionary * markedTextStyle; 
@optional
-(NSRange)markedRange;
-(NSDictionary *)markedTextStyle;
-(NSTextContainer *)textContainer;
-(void)setMarkedRange:(NSRange)arg1;
-(void)setTextContainer:(id)arg1;

@required
-(BOOL)isHorizontallyResizable;
-(CGRect*)visibleRect;
-(CGSize*)minSize;
-(void)setConstrainedFrameSize:(CGSize)arg1;
-(void)setNeedsDisplayInRect:(CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2;
-(CGPoint*)textContainerOrigin;
-(UIEdgeInsets*)textContainerInset;
-(void)invalidateTextContainerOrigin;

@end

