/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/

#import <libobjc.A.dylib/UABestAppSuggestionManagerResponseProtocol.h>

@class UABestAppSuggestionManager, NSString;

@interface UABestAppSuggestionManagerProxy : NSObject <UABestAppSuggestionManagerResponseProtocol> {

	UABestAppSuggestionManager* _weakManager;

}

@property (__weak) UABestAppSuggestionManager * weakManager;              //@synthesize weakManager=_weakManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWeakManager:(UABestAppSuggestionManager *)arg1 ;
-(UABestAppSuggestionManager *)weakManager;
-(void)notifyBestAppsChanged:(id)arg1 when:(id)arg2 confidence:(double)arg3 ;
@end

