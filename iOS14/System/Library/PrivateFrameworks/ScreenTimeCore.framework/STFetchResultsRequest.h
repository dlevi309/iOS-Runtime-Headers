/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class NSFetchRequest;

@interface STFetchResultsRequest : NSObject {

	NSFetchRequest* _fetchRequest;

}

@property (nonatomic,readonly) NSFetchRequest * fetchRequest;              //@synthesize fetchRequest=_fetchRequest - In the implementation block
+(id)requestWithFetchRequest:(id)arg1 ;
-(id)initWithEntity:(id)arg1 ;
-(id)initWithEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 ;
-(id)initWithEntity:(id)arg1 predicate:(id)arg2 ;
-(NSFetchRequest *)fetchRequest;
-(id)description;
-(id)initWithFetchRequest:(id)arg1 ;
@end

