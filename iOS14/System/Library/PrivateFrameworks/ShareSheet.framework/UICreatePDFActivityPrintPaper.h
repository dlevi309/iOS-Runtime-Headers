/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UIPrintPaper.h>

@interface UICreatePDFActivityPrintPaper : UIPrintPaper {

	CGSize __paperSize;

}

@property (assign,nonatomic) CGSize _paperSize;              //@synthesize _paperSize=__paperSize - In the implementation block
-(CGSize)_paperSize;
-(void)set_paperSize:(CGSize)arg1 ;
-(id)initWithPaperSize:(CGSize)arg1 ;
-(id)_keywordForPDFMetadata;
-(CGSize)paperSize;
-(CGRect)printableRect;
@end

