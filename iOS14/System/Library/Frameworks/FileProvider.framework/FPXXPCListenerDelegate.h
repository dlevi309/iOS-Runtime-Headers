/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInterface:(NSXPCInterface *)arg1 ;
-(id)exportedObject;
-(NSXPCInterface *)interface;
-(FPXExtensionContext *)context;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setContext:(FPXExtensionContext *)arg1 ;
@end

