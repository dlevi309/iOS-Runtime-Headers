/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <libobjc.A.dylib/EKFetchRequestToken.h>

@class EKEventStore;

@interface EKEventFetchRequestToken : NSObject <EKFetchRequestToken> {

	unsigned _token;
	EKEventStore* _eventStore;

}

@property (nonatomic,__weak,readonly) EKEventStore * eventStore;              //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,readonly) unsigned token;                                //@synthesize token=_token - In the implementation block
-(EKEventStore *)eventStore;
-(id)initWithEventStore:(id)arg1 token:(int)arg2 ;
-(unsigned)token;
-(void)cancel;
@end

