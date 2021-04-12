/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

@class SiriUISnippetViewController;


@protocol SiriUIReusableView <NSObject>
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController; 
@optional
-(UIEdgeInsets*)edgeInsets;
-(SiriUISnippetViewController *)snippetViewController;
-(void)setSnippetViewController:(id)arg1;

@required
+(double)defaultHeight;
+(id)elementKind;
+(id)reuseIdentifier;

@end

