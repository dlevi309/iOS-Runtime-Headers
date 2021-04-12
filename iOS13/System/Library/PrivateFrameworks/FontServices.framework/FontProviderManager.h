/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
*/


@class NSXPCConnection;

@interface FontProviderManager : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)sharedManager;
+(void)registerFonts:(id)arg1 enabled:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)unregisterFonts:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)registeredFontsInfo:(BOOL)arg1 ;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_registerFonts:(id)arg1 enabled:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)normalizeURLs:(id)arg1 ;
-(void)_unregisterFonts:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)registeredFontsInfo:(BOOL)arg1 ;
@end

