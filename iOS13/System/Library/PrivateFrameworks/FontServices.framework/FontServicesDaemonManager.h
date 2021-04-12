/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
*/


@class NSXPCConnection;

@interface FontServicesDaemonManager : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)sharedManager;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)requestFonts:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)checkinForFontPicker:(/*^block*/id)arg1 ;
-(void)checkin:(/*^block*/id)arg1 ;
-(id)requestFileAccess:(id)arg1 ;
-(void)fontChanged:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestFonts:(id)arg1 forClient:(id)arg2 ;
-(void)updatingUserFonts:(/*^block*/id)arg1 ;
-(void)resumeAndShowAlertForSuspendedFontProviders;
@end

