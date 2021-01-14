/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/NCNotificationSource.h>

@class NCNotificationDispatcher, NSString;

@interface SBWalletNotificationSource : NSObject <NCNotificationSource> {

	NCNotificationDispatcher* _dispatcher;

}

@property (nonatomic,retain) NCNotificationDispatcher * dispatcher;              //@synthesize dispatcher=_dispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NCNotificationDispatcher *)dispatcher;
-(void)setDispatcher:(NCNotificationDispatcher *)arg1 ;
-(id)initWithDispatcher:(id)arg1 ;
-(void)postNotificationRequestForCardItem:(id)arg1 ;
-(void)modifyNotificationRequestForCardItem:(id)arg1 ;
-(void)withdrawNotificationRequestForCardItem:(id)arg1 ;
@end

