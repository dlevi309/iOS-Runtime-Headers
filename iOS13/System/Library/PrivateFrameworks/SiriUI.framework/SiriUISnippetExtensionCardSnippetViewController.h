/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUICardSnippetViewController.h>

@class SAUISnippet, SiriUISashItem, NSExtension;

@interface SiriUISnippetExtensionCardSnippetViewController : SiriUICardSnippetViewController {

	SAUISnippet* _snippet;
	SiriUISashItem* _sashItem;
	NSExtension* _extension;

}

@property (nonatomic,retain) NSExtension * extension;              //@synthesize extension=_extension - In the implementation block
+(void)initialize;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(id)snippet;
-(void)setSnippet:(id)arg1 ;
-(void)_cancelTouchesIfNecessary;
-(void)_resumeTouchesIfNecessary;
-(id)sashItem;
-(id)initWithSnippet:(id)arg1 extension:(id)arg2 ;
@end

