/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@protocol MFContactsSearchConsumer;
@class NSString, NSMutableSet;

@interface MFContactsSearchTaskContext : NSObject {

	id<MFContactsSearchConsumer> _consumer;
	NSString* _text;
	NSMutableSet* _operations;
	NSMutableSet* _searchQueries;

}

@property (nonatomic,readonly) id<MFContactsSearchConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,readonly) NSString * text;                                    //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSMutableSet * operations;                          //@synthesize operations=_operations - In the implementation block
@property (nonatomic,readonly) NSMutableSet * searchQueries;                       //@synthesize searchQueries=_searchQueries - In the implementation block
+(id)contextWithConsumer:(id)arg1 text:(id)arg2 operations:(id)arg3 searchQueries:(id)arg4 ;
-(NSMutableSet *)operations;
-(BOOL)consumerRespondsToCallbacks;
-(NSMutableSet *)searchQueries;
-(BOOL)done;
-(NSString *)text;
-(id<MFContactsSearchConsumer>)consumer;
@end

