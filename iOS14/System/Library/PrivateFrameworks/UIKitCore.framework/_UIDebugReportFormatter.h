/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface _UIDebugReportFormatter : NSObject {

	unsigned long long _indentLevel;
	NSString* _indentString;
	unsigned long long _extraBodyIndentLevel;

}

@property (assign,nonatomic) unsigned long long indentLevel;                       //@synthesize indentLevel=_indentLevel - In the implementation block
@property (nonatomic,copy) NSString * indentString;                                //@synthesize indentString=_indentString - In the implementation block
@property (assign,nonatomic) unsigned long long extraBodyIndentLevel;              //@synthesize extraBodyIndentLevel=_extraBodyIndentLevel - In the implementation block
+(id)defaultFormatter;
-(id)init;
-(unsigned long long)indentLevel;
-(NSString *)indentString;
-(void)setIndentLevel:(unsigned long long)arg1 ;
-(id)stringFromReportComponents:(id)arg1 ;
-(void)setIndentString:(NSString *)arg1 ;
-(unsigned long long)extraBodyIndentLevel;
-(void)setExtraBodyIndentLevel:(unsigned long long)arg1 ;
@end

