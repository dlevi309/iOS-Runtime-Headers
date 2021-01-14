/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
*/


#import <FontServices/FontServices-Structs.h>
@class NSXPCConnection, NSXPCListenerEndpoint, NSMutableSet;

@interface FontPickerSupporter : NSObject {

	BOOL _clientHasFontAccessEntitlement;
	NSXPCConnection* _connection;
	NSXPCListenerEndpoint* _clientEndpoint;
	NSMutableSet* _activatedFontFilePaths;

}

@property (nonatomic,retain) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * clientEndpoint;              //@synthesize clientEndpoint=_clientEndpoint - In the implementation block
@property (nonatomic,retain) NSMutableSet * activatedFontFilePaths;               //@synthesize activatedFontFilePaths=_activatedFontFilePaths - In the implementation block
@property (assign,nonatomic) BOOL clientHasFontAccessEntitlement;                 //@synthesize clientHasFontAccessEntitlement=_clientHasFontAccessEntitlement - In the implementation block
-(void)setup;
-(id)initWithEndpoint:(id)arg1 ;
-(void)done;
-(NSXPCConnection *)connection;
-(void)checkin:(/*^block*/id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)synchronize:(id)arg1 deactivated:(id)arg2 includingFontAssets:(BOOL)arg3 ;
-(BOOL)clientHasFontAccessEntitlement:(SCD_Struct_Fo0)arg1 ;
-(void)setClientEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSXPCListenerEndpoint *)clientEndpoint;
-(NSMutableSet *)activatedFontFilePaths;
-(void)setActivatedFontFilePaths:(NSMutableSet *)arg1 ;
-(BOOL)clientHasFontAccessEntitlement;
-(void)setClientHasFontAccessEntitlement:(BOOL)arg1 ;
@end

