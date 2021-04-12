/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

@class NSArray, SAUITemplateEdgeInsets;


@protocol SAUITemplateItem <SAAceSerializable>
@property (nonatomic,copy) NSArray * communicationOptions; 
@property (nonatomic,retain) SAUITemplateEdgeInsets * fullScreenPaddingDelta; 
@property (assign,nonatomic) BOOL hasPriorityLayout; 
@property (nonatomic,retain) SAUITemplateEdgeInsets * padding; 
@property (nonatomic,copy) NSArray * presentationOptions; 
@property (assign,nonatomic) BOOL shouldBeOffscreenInPartial; 
@required
-(void)setPadding:(id)arg1;
-(SAUITemplateEdgeInsets *)padding;
-(void)setPresentationOptions:(id)arg1;
-(NSArray *)presentationOptions;
-(NSArray *)communicationOptions;
-(void)setCommunicationOptions:(id)arg1;
-(SAUITemplateEdgeInsets *)fullScreenPaddingDelta;
-(void)setFullScreenPaddingDelta:(id)arg1;
-(BOOL)hasPriorityLayout;
-(void)setHasPriorityLayout:(BOOL)arg1;
-(BOOL)shouldBeOffscreenInPartial;
-(void)setShouldBeOffscreenInPartial:(BOOL)arg1;

@end

