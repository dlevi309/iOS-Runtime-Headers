/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class NSFetchRequest;

@interface STFetchResultsRequest : NSObject {

	NSFetchRequest* _fetchRequest;

}

@property (nonatomic,readonly) NSFetchRequest * fetchRequest;              //@synthesize fetchRequest=_fetchRequest - In the implementation block
+(id)requestWithFetchRequest:(id)arg1 ;
-(id)description;
-(NSFetchRequest *)fetchRequest;
-(id)initWithFetchRequest:(id)arg1 ;
-(id)initWithEntity:(id)arg1 ;
-(id)initWithEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 ;
-(id)initWithEntity:(id)arg1 predicate:(id)arg2 ;
@end

