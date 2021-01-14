/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSAttributedStringReplacement : NSObject {

	long long _index;
	id _argument;
	long long _argumentKind;
	NSRange _specifierRangeInFormatString;
	NSRange _replacementRangeInResult;

}

@property (readonly) long long index;                                   //@synthesize index=_index - In the implementation block
@property (readonly) NSRange specifierRangeInFormatString;              //@synthesize specifierRangeInFormatString=_specifierRangeInFormatString - In the implementation block
@property (readonly) NSRange replacementRangeInResult;                  //@synthesize replacementRangeInResult=_replacementRangeInResult - In the implementation block
@property (readonly) id argument;                                       //@synthesize argument=_argument - In the implementation block
@property (readonly) long long argumentKind;                            //@synthesize argumentKind=_argumentKind - In the implementation block
+(id)_replacementsFromMetadataArray:(id)arg1 ;
-(long long)index;
-(id)argument;
-(long long)argumentKind;
-(NSRange)specifierRangeInFormatString;
-(NSRange)replacementRangeInResult;
-(id)_initWithMetadata:(id)arg1 ;
-(void)dealloc;
@end

