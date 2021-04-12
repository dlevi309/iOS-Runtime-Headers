/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSFetchRequest;

@interface NSPersistentCloudKitContainerEventRequest : NSPersistentStoreRequest {

	long long _resultType;
	NSFetchRequest* _ckEventFetchRequest;

}

@property (nonatomic,retain) NSFetchRequest * ckEventFetchRequest;              //@synthesize ckEventFetchRequest=_ckEventFetchRequest - In the implementation block
@property (assign) long long resultType;                                        //@synthesize resultType=_resultType - In the implementation block
+(id)validateClientFetchRequest:(id)arg1 ;
+(id)ckEventKeyForKey:(id)arg1 ;
+(id)translatePredicate:(id)arg1 orReturnFailureReason:(id*)arg2 ;
+(id)translateExpression:(id)arg1 orReturnFailureReason:(id*)arg2 ;
+(id)fetchEventsAfterDate:(id)arg1 ;
+(id)fetchEventsAfterEvent:(id)arg1 ;
+(id)fetchEventsMatchingFetchRequest:(id)arg1 ;
+(id)fetchRequestForEvents;
-(void)setResultType:(long long)arg1 ;
-(NSFetchRequest *)ckEventFetchRequest;
-(unsigned long long)requestType;
-(id)initWithCKEventFetchRequest:(id)arg1 ;
-(void)setCkEventFetchRequest:(NSFetchRequest *)arg1 ;
-(long long)resultType;
-(void)dealloc;
@end

