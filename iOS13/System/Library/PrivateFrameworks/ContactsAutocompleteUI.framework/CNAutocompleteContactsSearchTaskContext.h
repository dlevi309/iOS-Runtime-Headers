/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/


@protocol CNAutocompleteSearchConsumer;
@class NSString, NSMutableSet;

@interface CNAutocompleteContactsSearchTaskContext : NSObject {

	id<CNAutocompleteSearchConsumer> _consumer;
	NSString* _text;
	NSMutableSet* _operations;
	NSMutableSet* _searchQueries;

}

@property (nonatomic,readonly) id<CNAutocompleteSearchConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,readonly) NSString * text;                                        //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSMutableSet * operations;                              //@synthesize operations=_operations - In the implementation block
@property (nonatomic,readonly) NSMutableSet * searchQueries;                           //@synthesize searchQueries=_searchQueries - In the implementation block
+(id)contextWithConsumer:(id)arg1 text:(id)arg2 operations:(id)arg3 searchQueries:(id)arg4 ;
-(NSMutableSet *)operations;
-(NSString *)text;
-(BOOL)done;
-(id<CNAutocompleteSearchConsumer>)consumer;
-(BOOL)consumerRespondsToCallbacks;
-(NSMutableSet *)searchQueries;
@end

