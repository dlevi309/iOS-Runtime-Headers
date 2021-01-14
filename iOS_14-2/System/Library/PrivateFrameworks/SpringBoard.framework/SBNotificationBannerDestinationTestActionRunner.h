/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/NCNotificationActionRunner.h>

@class NSString;

@interface SBNotificationBannerDestinationTestActionRunner : NSObject <NCNotificationActionRunner> {

	BOOL _shouldForwardAction;

}

@property (assign,nonatomic) BOOL shouldForwardAction;              //@synthesize shouldForwardAction=_shouldForwardAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)executeAction:(id)arg1 fromOrigin:(id)arg2 endpoint:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)shouldForwardAction;
-(void)setShouldForwardAction:(BOOL)arg1 ;
@end

