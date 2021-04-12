/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBHeadersFooters : NSObject
+(PptHeadersFootersAtom*)headersFootersAtomWithHeadersFootersContainer:(id)arg1 ;
+(void)readHeaderFooterTextFromHeadersFootersContainer:(id)arg1 toPlaceholderShape:(id)arg2 ;
+(id)headersFootersContainerWithSlideContainer:(id)arg1 state:(id)arg2 ;
+(void)addCopyOfHeaderFooterPlaceholderOfType:(int)arg1 toDrawables:(id)arg2 slideBase:(id)arg3 headersFootersContainer:(id)arg4 state:(id)arg5 ;
+(void)readHeadersFootersFromSlideContainer:(id)arg1 toMasterSlide:(id)arg2 drawables:(id)arg3 state:(id)arg4 ;
+(void)readHeadersFootersToSlideLayout:(id)arg1 drawables:(id)arg2 state:(id)arg3 ;
+(void)readHeadersFootersFromSlideContainer:(id)arg1 toSlide:(id)arg2 drawables:(id)arg3 state:(id)arg4 ;
@end

