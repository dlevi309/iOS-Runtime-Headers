/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_followUpControllerForContext:(id)arg1 ;
-(BOOL)postFollowUpItemForContext:(id)arg1 error:(id*)arg2 ;
-(id)informativeText;
@end

