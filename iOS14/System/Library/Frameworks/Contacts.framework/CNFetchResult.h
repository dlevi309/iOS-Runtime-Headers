/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSData;

@interface CNFetchResult : NSObject {

	id _value;
	NSData* _currentHistoryToken;

}

@property (nonatomic,readonly) id value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSData * currentHistoryToken;              //@synthesize currentHistoryToken=_currentHistoryToken - In the implementation block
-(NSData *)currentHistoryToken;
-(id)description;
-(id)initWithValue:(id)arg1 currentHistoryToken:(id)arg2 ;
-(id)value;
@end

