/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
*/

#import <libobjc.A.dylib/PKBrowserClientProtocol.h>

@protocol PKPrinterBrowserDelegate;
@class NSXPCConnection, NSMutableDictionary, NSString;

@interface PKPrinterBrowser : NSObject <PKBrowserClientProtocol> {

	unsigned char _originalCellFlag;
	unsigned char _originalWifiFlag;
	BOOL _delegateRespondsToProximityUpdate;
	id<PKPrinterBrowserDelegate> _delegate;
	NSXPCConnection* _pkBrowseConnection;
	NSMutableDictionary* _printers;
	NSMutableDictionary* _btDevices;

}

@property (nonatomic,retain) NSXPCConnection * pkBrowseConnection;               //@synthesize pkBrowseConnection=_pkBrowseConnection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * printers;                     //@synthesize printers=_printers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * btDevices;                    //@synthesize btDevices=_btDevices - In the implementation block
@property (assign,nonatomic) id<PKPrinterBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)browserWithDelegate:(id)arg1 ;
-(id<PKPrinterBrowserDelegate>)delegate;
-(void)setDelegate:(id<PKPrinterBrowserDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)dealloc;
-(void)printerAdded:(id)arg1 more:(BOOL)arg2 ;
-(void)printerRemoved:(id)arg1 more:(BOOL)arg2 ;
-(void)btleRssiUpdated:(id)arg1 rssi:(id)arg2 ;
-(void)btlePrinterFound:(id)arg1 ;
-(NSXPCConnection *)pkBrowseConnection;
-(void)setPkBrowseConnection:(NSXPCConnection *)arg1 ;
-(void)setPrinters:(NSMutableDictionary *)arg1 ;
-(void)setBtDevices:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)printers;
-(NSMutableDictionary *)btDevices;
@end

