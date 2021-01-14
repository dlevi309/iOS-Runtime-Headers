/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)summariesFutureForContactsIdentifiers:(id)arg1 matchInfos:(id)arg2 contactStore:(id)arg3 scheduler:(id)arg4 ;
-(id)summaryForContact:(id)arg1 matchInfo:(id)arg2 ;
-(id)attributedStringForPropertyValueString:(id)arg1 queryTerms:(id)arg2 outMatchCount:(unsigned long long*)arg3 ;
-(void)dealloc;
@end

