/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@class BCSBusinessItem, NSDate;

@interface BCSPersistentBusinessItemObject : NSObject {

	BCSBusinessItem* _businessItem;
	NSDate* _TTLDate;
	NSDate* _lastRetrievedDate;

}

@property (nonatomic,readonly) BCSBusinessItem * businessItem;              //@synthesize businessItem=_businessItem - In the implementation block
@property (nonatomic,readonly) NSDate * TTLDate;                            //@synthesize TTLDate=_TTLDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastRetrievedDate;                  //@synthesize lastRetrievedDate=_lastRetrievedDate - In the implementation block
-(NSDate *)TTLDate;
-(BCSBusinessItem *)businessItem;
-(id)initWithBusinessItem:(id)arg1 lastRetrievedDate:(id)arg2 TTLDate:(id)arg3 ;
-(NSDate *)lastRetrievedDate;
@end

