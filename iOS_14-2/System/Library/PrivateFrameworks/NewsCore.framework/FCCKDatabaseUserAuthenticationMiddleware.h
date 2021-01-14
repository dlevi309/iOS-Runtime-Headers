/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCCKDatabaseOperationMiddleware.h>

@class NSString;

@interface FCCKDatabaseUserAuthenticationMiddleware : NSObject <FCCKDatabaseOperationMiddleware> {

	BOOL _privateDataSyncingEnabled;

}

@property (assign,getter=isPrivateDataSyncingEnabled,nonatomic) BOOL privateDataSyncingEnabled;              //@synthesize privateDataSyncingEnabled=_privateDataSyncingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isPrivateDataSyncingEnabled;
-(id)initWithPrivateDataSyncingEnabled:(BOOL)arg1 ;
-(long long)database:(id)arg1 willEnqueueOperation:(id)arg2 error:(id*)arg3 ;
-(void)setPrivateDataSyncingEnabled:(BOOL)arg1 ;
@end

