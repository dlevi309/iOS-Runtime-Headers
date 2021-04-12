/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class FPXExtensionContext, NSXPCInterface, NSString;

@interface FPXXPCListenerDelegate : NSObject <NSXPCListenerDelegate> {

	FPXExtensionContext* _context;
	NSXPCInterface* _interface;
	id _exportedObject;
	NSString* _serviceName;

}

@property (nonatomic,retain) FPXExtensionContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSXPCInterface * interface;                 //@synthesize interface=_interface - In the implementation block
@property (nonatomic,retain) id exportedObject;                          //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,copy) NSString * serviceName;                       //@synthesize serviceName=_serviceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setExportedObject:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(FPXExtensionContext *)context;
-(NSXPCInterface *)interface;
-(void)setInterface:(NSXPCInterface *)arg1 ;
-(NSString *)serviceName;
-(id)exportedObject;
-(void)setContext:(FPXExtensionContext *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
@end

