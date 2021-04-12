/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/

#import <libobjc.A.dylib/CNDonationAccountLogger.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface _CNDonationAccountLogger : NSObject <CNDonationAccountLogger> {

	NSObject*<OS_os_log> _log_t;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> log_t;              //@synthesize log_t=_log_t - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_os_log>)log_t;
-(void)accountRemoved:(id)arg1 ;
-(void)accountAdded:(id)arg1 ;
-(void)accountChanged:(id)arg1 ;
-(void)pluginLoaded;
-(void)pluginUnloaded;
-(void)accountsDidNotChange;
-(void)donating:(id)arg1 ;
-(void)removing:(id)arg1 ;
-(void)donationFailedWithError:(id)arg1 ;
-(void)removalFailedWithError:(id)arg1 ;
@end

