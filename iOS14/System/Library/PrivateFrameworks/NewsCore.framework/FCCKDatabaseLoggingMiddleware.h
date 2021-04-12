/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCCKDatabaseOperationMiddleware.h>

@class NSString;

@interface FCCKDatabaseLoggingMiddleware : NSObject <FCCKDatabaseOperationMiddleware> {

	BOOL _allowNilDesiredKeys;

}

@property (assign,nonatomic) BOOL allowNilDesiredKeys;              //@synthesize allowNilDesiredKeys=_allowNilDesiredKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_addLoggersToOperation:(id)arg1 database:(id)arg2 ;
-(BOOL)allowNilDesiredKeys;
-(long long)database:(id)arg1 willEnqueueOperation:(id)arg2 error:(id*)arg3 ;
-(id)initAllowingNilDesiredKeys:(BOOL)arg1 ;
-(void)setAllowNilDesiredKeys:(BOOL)arg1 ;
@end

