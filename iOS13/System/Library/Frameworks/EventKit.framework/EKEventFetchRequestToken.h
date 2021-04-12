/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned)token;
-(void)cancel;
-(EKEventStore *)eventStore;
-(id)initWithEventStore:(id)arg1 token:(int)arg2 ;
@end

