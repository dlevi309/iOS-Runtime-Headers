/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)headerText;
-(NSString *)displayText;
-(id)initWithHeaderText:(id)arg1 displayText:(id)arg2 type:(long long)arg3 value:(id)arg4 ;
@end

