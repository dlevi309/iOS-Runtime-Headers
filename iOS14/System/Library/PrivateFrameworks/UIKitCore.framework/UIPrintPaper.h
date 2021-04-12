/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)bestPaperForPageSize:(CGSize)arg1 withPapersFromArray:(id)arg2 ;
+(id)_defaultPaperListForOutputType:(long long)arg1 ;
+(id)bestPaperForPageSize:(CGSize)arg1 andContentType:(long long)arg2 withPapersFromArray:(id)arg3 ;
+(id)_defaultPKPaperForOuptutType:(long long)arg1 ;
+(id)_defaultPaperForOutputType:(long long)arg1 ;
-(CGRect)_printableRectForDuplex:(BOOL)arg1 ;
-(void)_updatePKPaper:(id)arg1 ;
-(void)_setPaperOrientation:(int)arg1 ;
-(CGRect)printRect;
-(id)_keywordForPDFMetadata;
-(id)_pkPaper;
-(id)_initWithPrintKitPaper:(id)arg1 ;
-(int)_paperOrientation;
-(id)description;
-(id)_localizedName;
-(CGSize)paperSize;
-(id)_localizedMediaTypeName;
-(CGRect)printableRect;
-(BOOL)isEqual:(id)arg1 ;
@end

