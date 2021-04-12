/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
*/

#import <SMS/SMS-Structs.h>
#import <IMSharedUtilities/IMFromSuperParserContext.h>

@class NSMutableString, NSString;

@interface SuperToSMSRelayMessageParser : IMFromSuperParserContext {

	NSMutableString* _outHTML;
	BOOL _isSimpleString;

}

@property (nonatomic,retain,readonly) NSString * outHTML;              //@synthesize outHTML=_outHTML - In the implementation block
@property (nonatomic,readonly) BOOL isSimpleString;                    //@synthesize isSimpleString=_isSimpleString - In the implementation block
-(void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 emoji:(id)arg9 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 ;
-(id)name;
-(id)initWithAttributedString:(id)arg1 ;
-(NSString *)outHTML;
-(void)parserDidEnd:(id)arg1 ;
-(id)resultsForLogging;
-(id)parser:(id)arg1 preprocessedAttributesForAttributes:(id)arg2 range:(NSRange)arg3 ;
-(BOOL)shouldPreprocess;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 characters:(id)arg4 ;
-(void)dealloc;
-(BOOL)isSimpleString;
@end

