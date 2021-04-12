/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


#import <Contacts/Contacts-Structs.h>
@interface CNContactMatchSummarizer : NSObject {

	void* _tokenList;
	CFStringTokenizerRef _tokenizer;

}
+(id)summaryProperties;
+(id)keyDescriptorForContactIdentifiers:(id)arg1 matchInfos:(id)arg2 ;
+(id)summaryPropertyForMatchInfo:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)summaryForContact:(id)arg1 matchInfo:(id)arg2 ;
-(id)attributedStringForPropertyValueString:(id)arg1 queryTerms:(id)arg2 outMatchCount:(unsigned long long*)arg3 ;
-(id)summariesFutureForContactsIdentifiers:(id)arg1 matchInfos:(id)arg2 contactStore:(id)arg3 scheduler:(id)arg4 ;
@end

