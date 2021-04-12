/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/

#import <libobjc.A.dylib/SRFollowUpPosting.h>

@class FLFollowUpController, NSString;

@interface SRFollowUp : NSObject <SRFollowUpPosting> {

	FLFollowUpController* _followUpController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)pendingFollowUpItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)postFollowUpItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

