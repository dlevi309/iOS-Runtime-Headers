/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)database:(id)arg1 willEnqueueOperation:(id)arg2 ;
-(BOOL)isPrivateDataSyncingEnabled;
-(id)initWithPrivateDataSyncingEnabled:(BOOL)arg1 ;
-(void)setPrivateDataSyncingEnabled:(BOOL)arg1 ;
@end

