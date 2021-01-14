/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMStyle.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDStyle;

@interface EMCellStyle : CMStyle <NSCopying> {

	EDStyle* _edStyle;
	int _edCellType;
	double _columnWidth;
	double _contentWidth;
	BOOL _truncateContents;
	BOOL _resolvedProperties;

}
+(double)contentWidthForColumnWidth:(double)arg1 ;
+(id)_parseFontName:(id)arg1 nameContainsBold:(BOOL*)arg2 nameContainsItalic:(BOOL*)arg3 ;
+(id)styleForFont:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)cssStyleString;
-(id)cacheFriendlyCSSStyleString;
-(id)initWithEDStyle:(id)arg1 type:(int)arg2 columnWidth:(unsigned long long)arg3 contentWidth:(unsigned long long)arg4 truncateContents:(BOOL)arg5 ;
-(void)addFontStyle:(id)arg1 ;
-(void)addBordersStyle:(id)arg1 ;
-(void)addFillStyle:(id)arg1 ;
-(void)addAlignmentStyle:(id)arg1 ;
-(void)resolveFormatType;
-(void)resolveContentWidth;
@end

