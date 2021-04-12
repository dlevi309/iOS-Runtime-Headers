/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXTextSource.h>

@class SXFormattedText;

@interface SXDataTableTextSource : SXTextSource {

	SXFormattedText* _formattedText;
	unsigned long long _defaultTextAlignment;
	NSRange _indexPath;

}

@property (nonatomic,readonly) SXFormattedText * formattedText;                    //@synthesize formattedText=_formattedText - In the implementation block
@property (nonatomic,readonly) NSRange indexPath;                                  //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) unsigned long long defaultTextAlignment;              //@synthesize defaultTextAlignment=_defaultTextAlignment - In the implementation block
-(NSRange)indexPath;
-(SXFormattedText *)formattedText;
-(void)applyStylingOnTextTangierStorage:(id)arg1 ;
-(unsigned long long)defaultTextAlignment;
-(id)initWithFormattedText:(id)arg1 indexPath:(NSRange)arg2 smartFieldFactory:(id)arg3 dataSource:(id)arg4 documentLangaugeProvider:(id)arg5 fontAttributesConstructor:(id)arg6 ;
-(void)setDefaultTextAlignment:(unsigned long long)arg1 ;
@end

