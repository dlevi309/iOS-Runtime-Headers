/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@class NSPredicate;

@interface HMFHTTPRequestHandler : HMFObject {

	NSPredicate* _methodPredicate;
	NSPredicate* _URLPredicate;
	/*^block*/id _matchBlock;
	/*^block*/id _requestBlock;

}

@property (nonatomic,copy,readonly) NSPredicate * methodPredicate;              //@synthesize methodPredicate=_methodPredicate - In the implementation block
@property (nonatomic,copy,readonly) NSPredicate * URLPredicate;                 //@synthesize URLPredicate=_URLPredicate - In the implementation block
@property (nonatomic,copy,readonly) id matchBlock;                              //@synthesize matchBlock=_matchBlock - In the implementation block
@property (nonatomic,copy) id requestBlock;                                     //@synthesize requestBlock=_requestBlock - In the implementation block
+(BOOL)_isValidMethodPrediate:(id)arg1 ;
+(BOOL)_isValidURLPredicate:(id)arg1 ;
-(id)init;
-(id)requestBlock;
-(id)matchBlock;
-(id)initWithMethodPredicate:(id)arg1 URLPredicate:(id)arg2 matchBlock:(/*^block*/id)arg3 ;
-(void)setRequestBlock:(id)arg1 ;
-(NSPredicate *)methodPredicate;
-(NSPredicate *)URLPredicate;
@end

