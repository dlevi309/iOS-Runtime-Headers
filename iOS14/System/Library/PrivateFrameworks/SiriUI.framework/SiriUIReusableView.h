/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

