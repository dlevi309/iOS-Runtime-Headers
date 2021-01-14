/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
*/

#import <FontServices/FontServicesClientProtocol.h>

@class NSXPCConnection;

@interface FontServicesDaemonManager : NSObject <FontServicesClientProtocol> {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)sharedManager;
-(void)synchronizeFontAssets:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fontAddedInfo:(id)arg1 addedURLStrings:(id)arg2 removedURLStrings:(id)arg3 ;
-(void)requestFonts:(id)arg1 forClient:(id)arg2 ;
-(void)scheduleFontFilesDeletion:(id)arg1 ;
-(void)updatingUserFonts:(/*^block*/id)arg1 ;
-(void)resetIssuedFontsFor:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)checkin:(/*^block*/id)arg1 ;
-(void)checkinForWebKitProcess:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestFonts:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)resumeAndShowAlertForSuspendedFontProviders;
-(void)fontChanged:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)checkinForFontPicker:(/*^block*/id)arg1 ;
@end

