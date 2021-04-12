/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIPrintPaper : NSObject {

	int _paperOrientation;
	id _internal;

}

@property (readonly) CGSize paperSize; 
@property (readonly) CGRect printableRect; 
+(id)_readyDocumentPaperListForPrinter:(id)arg1 withDuplexMode:(long long)arg2 contentSize:(CGSize)arg3 scaleUpForRoll:(BOOL)arg4 ;
+(id)_readyPaperListForPrinter:(id)arg1 withDuplexMode:(long long)arg2 forContentType:(long long)arg3 contentSize:(CGSize)arg4 ;
+(id)_defaultPaperForOutputType:(long long)arg1 ;
+(id)bestPaperForPageSize:(CGSize)arg1 withPapersFromArray:(id)arg2 ;
+(id)_defaultPaperListForOutputType:(long long)arg1 ;
+(id)bestPaperForPageSize:(CGSize)arg1 andContentType:(long long)arg2 withPapersFromArray:(id)arg3 ;
+(id)_defaultPKPaperForOuptutType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)_localizedName;
-(CGSize)paperSize;
-(id)_pkPaper;
-(id)_localizedMediaTypeName;
-(CGRect)printableRect;
-(CGRect)_printableRectForDuplex:(BOOL)arg1 ;
-(void)_updatePKPaper:(id)arg1 ;
-(void)_setPaperOrientation:(int)arg1 ;
-(id)_keywordForPDFMetadata;
-(id)_initWithPrintKitPaper:(id)arg1 ;
-(int)_paperOrientation;
-(CGRect)printRect;
@end

