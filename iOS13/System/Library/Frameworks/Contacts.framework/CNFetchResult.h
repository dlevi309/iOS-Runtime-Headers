/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSData;

@interface CNFetchResult : NSObject {

	id _value;
	NSData* _currentHistoryToken;

}

@property (nonatomic,readonly) id value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSData * currentHistoryToken;              //@synthesize currentHistoryToken=_currentHistoryToken - In the implementation block
-(id)description;
-(id)value;
-(NSData *)currentHistoryToken;
-(id)initWithValue:(id)arg1 currentHistoryToken:(id)arg2 ;
@end

