/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSArray, NSData;

@interface _CNChangeHistoryFetchExecutionResponse : NSObject {

	NSArray* _events;
	NSData* _token;

}

@property (copy,readonly) NSArray * events;              //@synthesize events=_events - In the implementation block
@property (copy,readonly) NSData * token;                //@synthesize token=_token - In the implementation block
-(id)initWithEvents:(id)arg1 token:(id)arg2 ;
-(NSArray *)events;
-(NSData *)token;
@end

