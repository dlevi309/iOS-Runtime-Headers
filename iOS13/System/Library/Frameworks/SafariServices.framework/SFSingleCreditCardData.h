/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariShared/WBSSingleCreditCardData.h>

@class NSString;

@interface SFSingleCreditCardData : WBSSingleCreditCardData {

	NSString* _headerText;
	NSString* _displayText;

}

@property (nonatomic,copy,readonly) NSString * headerText;               //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayText;              //@synthesize displayText=_displayText - In the implementation block
-(NSString *)displayText;
-(NSString *)headerText;
-(id)initWithHeaderText:(id)arg1 displayText:(id)arg2 type:(long long)arg3 value:(id)arg4 ;
@end

