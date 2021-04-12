/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
*/

#import <IMSharedUtilities/IMHTMLToSuperParserContext.h>

@class NSMutableArray, SMSTextPart, NSArray;

@interface SMSToSuperParserContext : IMHTMLToSuperParserContext {

	NSMutableArray* _orderedParts;
	SMSTextPart* _currentTextPart;

}

@property (nonatomic,retain,readonly) NSArray * orderedParts;              //@synthesize orderedParts=_orderedParts - In the implementation block
-(void)dealloc;
-(id)name;
-(NSArray *)orderedParts;
-(void)_addPart:(id)arg1 ;
@end

