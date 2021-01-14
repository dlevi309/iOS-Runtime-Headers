/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@class ClientConnection;

@interface CADOperationGroup : NSObject {

	ClientConnection* _conn;

}

@property (nonatomic,readonly) ClientConnection * conn;              //@synthesize conn=_conn - In the implementation block
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
+(id)whitelistedBundles;
+(BOOL)requiresEventAccess;
-(id)initWithClientConnection:(id)arg1 ;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
-(ClientConnection *)conn;
@end

