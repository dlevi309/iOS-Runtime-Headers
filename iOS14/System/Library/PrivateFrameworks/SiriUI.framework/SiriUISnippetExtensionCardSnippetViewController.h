/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)snippet;
-(void)setSnippet:(id)arg1 ;
-(NSExtension *)extension;
-(id)sashItem;
-(id)initWithSnippet:(id)arg1 extension:(id)arg2 ;
-(void)_cancelTouchesIfNecessary;
-(void)_resumeTouchesIfNecessary;
@end

