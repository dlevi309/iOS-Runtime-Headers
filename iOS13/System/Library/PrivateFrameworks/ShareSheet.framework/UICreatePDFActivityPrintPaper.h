/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UIPrintPaper.h>

@interface UICreatePDFActivityPrintPaper : UIPrintPaper {

	CGSize __paperSize;

}

@property (assign,nonatomic) CGSize _paperSize;              //@synthesize _paperSize=__paperSize - In the implementation block
-(CGSize)paperSize;
-(CGSize)_paperSize;
-(CGRect)printableRect;
-(id)_keywordForPDFMetadata;
-(void)set_paperSize:(CGSize)arg1 ;
-(id)initWithPaperSize:(CGSize)arg1 ;
@end

