/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>

@class NSArray;

@interface AMSSignOutTask : AMSTask {

	NSArray* _accounts;

}

@property (nonatomic,retain) NSArray * accounts;              //@synthesize accounts=_accounts - In the implementation block
+(id)_signOutOfAccount:(id)arg1 ;
-(void)setAccounts:(NSArray *)arg1 ;
-(NSArray *)accounts;
-(id)initWithAccounts:(id)arg1 ;
-(id)performTask;
@end

