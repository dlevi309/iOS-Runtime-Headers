/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


@protocol OS_nw_activity, OS_nw_connection;
@class NSObject;

@interface ECNWActivity : NSObject {

	NSObject*<OS_nw_activity> _activity;
	NSObject*<OS_nw_connection> _currentConnection;

}
+(void)attachCurrentActivityToConnection:(id)arg1 ;
+(void)detachCurrentActivityFromConnection:(id)arg1 ;
-(id)initWithDomain:(unsigned)arg1 type:(unsigned)arg2 ;
-(void)stopActivityWithSuccess:(BOOL)arg1 ;
-(void)startActivity;
@end

