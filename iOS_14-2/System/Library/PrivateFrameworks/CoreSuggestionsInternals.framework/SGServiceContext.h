/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class SGSqlEntityStore;

@interface SGServiceContext : NSObject {

	SGSqlEntityStore* _store;

}

@property (nonatomic,readonly) SGSqlEntityStore * store;              //@synthesize store=_store - In the implementation block
-(id)init;
-(SGSqlEntityStore *)store;
-(id)initWithStore:(id)arg1 ;
@end

