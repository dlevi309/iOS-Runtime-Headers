/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/AKFollowUpProvider.h>

@class FLFollowUpController, NSString;

@interface AKFollowUpController : NSObject <AKFollowUpProvider> {

	FLFollowUpController* _followupController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)pendingFollowUpItems:(id*)arg1 ;
-(BOOL)removeFollowUpItemsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAllFollowUpItems:(id*)arg1 ;
-(BOOL)addFollowUpItems:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeFollowUpItems:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearNotificationsForItem:(id)arg1 error:(id*)arg2 ;
-(id)initWithFLFollowupController:(id)arg1 ;
@end

