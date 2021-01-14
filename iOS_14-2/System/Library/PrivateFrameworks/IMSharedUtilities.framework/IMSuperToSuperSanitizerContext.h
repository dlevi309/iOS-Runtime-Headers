/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMFromSuperParserContext.h>

@class NSMutableAttributedString, NSMutableArray, NSString, NSAttributedString, NSArray;

@interface IMSuperToSuperSanitizerContext : IMFromSuperParserContext {

	NSMutableAttributedString* _content;
	NSMutableArray* _attachments;
	NSString* _backgroundColor;
	NSString* _foregroundColor;
	unsigned long long _offset;
	long long _baseWritingDirection;
	BOOL _extractAttachments;
	BOOL _hadBaseWritingDirectionAttribute;

}

@property (retain,readonly) NSAttributedString * sanitizedContent;              //@synthesize content=_content - In the implementation block
@property (retain,readonly) NSArray * attachments;                              //@synthesize attachments=_attachments - In the implementation block
-(NSAttributedString *)sanitizedContent;
-(void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 emoji:(id)arg9 ;
-(id)initWithAttributedString:(id)arg1 extractAttachments:(BOOL)arg2 ;
-(NSArray *)attachments;
-(id)name;
-(void)parserDidEnd:(id)arg1 ;
-(id)resultsForLogging;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 characters:(id)arg4 ;
-(void)dealloc;
@end

