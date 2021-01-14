/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMXMLParserContext.h>

@class NSMutableArray, NSMutableDictionary, NSMutableAttributedString, NSString, NSAttributedString, NSArray;

@interface IMToSuperParserContext : IMXMLParserContext {

	unsigned long long _underlineCount;
	unsigned long long _boldCount;
	unsigned long long _italicCount;
	unsigned long long _strikethroughCount;
	unsigned long long _messagePartNumber;
	NSMutableArray* _fontFamilyStack;
	NSMutableArray* _fontSizeStack;
	NSMutableArray* _linkStack;
	NSMutableArray* _backgroundColorStack;
	NSMutableArray* _foregroundColorStack;
	NSMutableDictionary* _currentAttributes;
	BOOL _didAddBodyAttributes;
	NSMutableAttributedString* _body;
	NSMutableArray* _fileTransferGUIDs;
	NSString* _backgroundColor;
	NSString* _foregroundColor;
	long long _baseWritingDirection;

}

@property (nonatomic,copy) NSString * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * foregroundColor;                 //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,readonly) NSAttributedString * body; 
@property (nonatomic,retain) NSArray * fileTransferGUIDs;              //@synthesize fileTransferGUIDs=_fileTransferGUIDs - In the implementation block
@property (assign) long long baseWritingDirection;                     //@synthesize baseWritingDirection=_baseWritingDirection - In the implementation block
-(void)appendString:(id)arg1 ;
-(NSAttributedString *)body;
-(void)setForegroundColor:(NSString *)arg1 ;
-(NSString *)foregroundColor;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(NSString *)backgroundColor;
-(id)name;
-(void)popLink;
-(void)setFileTransferGUIDs:(NSArray *)arg1 ;
-(NSArray *)fileTransferGUIDs;
-(void)setBaseWritingDirection:(long long)arg1 ;
-(long long)baseWritingDirection;
-(void)reset;
-(void)pushLink:(id)arg1 ;
-(void)decrementBoldCount;
-(void)popFontSize;
-(void)incrementBoldCount;
-(void)incrementItalicCount;
-(void)decrementItalicCount;
-(void)pushFontFamily:(id)arg1 ;
-(void)pushFontSize:(id)arg1 ;
-(void)popFontFamily;
-(void)incrementStrikethroughCount;
-(void)decrementStrikethroughCount;
-(void)incrementUnderlineCount;
-(void)decrementUnderlineCount;
-(void)appendBreadcrumbText:(id)arg1 withOptions:(unsigned)arg2 ;
-(void)_clearIvars;
-(void)_updateFontFamily;
-(void)_updateFontSize;
-(void)_pushValue:(id)arg1 ontoStack:(id)arg2 attributeName:(id)arg3 ;
-(void)_initIvars;
-(void)_popValueFromStack:(id)arg1 attributeName:(id)arg2 ;
-(void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(long long)arg3 height:(long long)arg4 emoji:(long long)arg5 ;
-(void)_incrementMessagePartNumber;
-(void)pushBackgroundColor:(id)arg1 ;
-(void)popBackgroundColor;
-(void)pushForegroundColor:(id)arg1 ;
-(void)popForegroundColor;
-(void)appendFileTransferWithGUID:(id)arg1 ;
-(void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(long long)arg3 height:(long long)arg4 ;
-(id)resultsForLogging;
-(void)dealloc;
@end

