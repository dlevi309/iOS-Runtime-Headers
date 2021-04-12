/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@interface SGSearchableItemHelper : NSObject
+(BOOL)mailItemIsRecent:(id)arg1 emailHeaders:(id)arg2 ;
+(id)mailItemMessageIdHeaderValues:(id)arg1 ;
+(BOOL)mailItemIsValid:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3 ;
+(BOOL)mailItemIsInDrafts:(id)arg1 mailboxIdentifiers:(id)arg2 ;
+(BOOL)mailItemIsInSent:(id)arg1 mailboxIdentifiers:(id)arg2 ;
+(BOOL)mailItemIsInTrash:(id)arg1 mailboxIdentifiers:(id)arg2 ;
+(BOOL)mailItemIsFromSupportedAccount:(id)arg1 ;
+(BOOL)searchableItemIsEmpty:(id)arg1 ;
+(BOOL)searchableItemIsOutgoing:(id)arg1 ;
+(BOOL)mailItemIsSPAM:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3 ;
+(BOOL)mailItemIsRecent:(id)arg1 ;
+(BOOL)mailItemIsValid:(id)arg1 ;
+(BOOL)mailItemIsSPAM:(id)arg1 ;
+(BOOL)mailItemIsInDrafts:(id)arg1 ;
+(BOOL)mailItemIsInSent:(id)arg1 ;
+(BOOL)mailItemIsInTrash:(id)arg1 ;
+(BOOL)mailItemIsTooBig:(id)arg1 ;
+(id)serializeAttributes:(id)arg1 ;
+(id)serializeAttributesAndBody:(id)arg1 ;
+(id)deserializeAttributes:(id)arg1 ;
+(id)deserializeAttributes:(id)arg1 andBody:(id)arg2 ;
+(id)deserializeAttributesAndBody:(id)arg1 ;
@end

