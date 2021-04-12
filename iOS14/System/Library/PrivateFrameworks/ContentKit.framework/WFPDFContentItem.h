/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@interface WFPDFContentItem : WFGenericFileContentItem <WFContentItemClass>
+(void)initialize;
+(id)typeDescription;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)itemWithPrintFormatters:(id)arg1 names:(id)arg2 ;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentations:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(void)getPDF:(/*^block*/id)arg1 matchingInputSize:(BOOL)arg2 withMargin:(BOOL)arg3 startingAtPage:(long long)arg4 endingAtPage:(long long)arg5 ;
-(void)getPageTextsWithPDFKit:(/*^block*/id)arg1 ;
-(void)getPageTextsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

