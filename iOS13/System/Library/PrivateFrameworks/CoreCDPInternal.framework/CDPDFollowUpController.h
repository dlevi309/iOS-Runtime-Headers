/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

#import <libobjc.A.dylib/CDPDAuthListener.h>

@class FLFollowUpController, CDPDFollowUpFactory, NSString;

@interface CDPDFollowUpController : NSObject <CDPDAuthListener> {

	FLFollowUpController* _followUpController;
	CDPDFollowUpFactory* _followUpFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)clearFollowUpWithContext:(id)arg1 error:(id*)arg2 ;
-(void)securityLevelChanged:(BOOL)arg1 ;
-(BOOL)postFollowUpItemForContext:(id)arg1 error:(id*)arg2 ;
-(id)_followUpControllerForContext:(id)arg1 ;
@end

