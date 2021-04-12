/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSArray, NSData;

@interface _CNChangeHistoryFetchExecutionResponse : NSObject {

	NSArray* _events;
	NSData* _token;

}

@property (copy,readonly) NSArray * events;              //@synthesize events=_events - In the implementation block
@property (copy,readonly) NSData * token;                //@synthesize token=_token - In the implementation block
-(NSData *)token;
-(NSArray *)events;
-(id)initWithEvents:(id)arg1 token:(id)arg2 ;
@end

