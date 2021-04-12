/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
*/

#import <ShareSheet/UIActivityItemProvider.h>

@class NSAttributedString;

@interface RTTUIActivityItemProvider : UIActivityItemProvider {

	NSAttributedString* _transcript;

}

@property (nonatomic,retain) NSAttributedString * transcript;              //@synthesize transcript=_transcript - In the implementation block
-(NSAttributedString *)transcript;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
-(void)setTranscript:(NSAttributedString *)arg1 ;
@end

