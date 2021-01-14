/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSHistoryServiceDatabaseDelegate.h>

@protocol WBSHistoryServiceDatabaseDelegate;
@class NSString;

@interface WBSHistoryServiceDatabaseDelegateWeakProxy : NSObject <WBSHistoryServiceDatabaseDelegate> {

	id<WBSHistoryServiceDatabaseDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)reportSevereError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)reportPermanentIDsForItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reportPermanentIDsForVisits:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

