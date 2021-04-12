/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class Protocol, NSString;

@interface CNXPCListenerDelegate : NSObject <NSXPCListenerDelegate> {

	id _exportedObject;
	Protocol* _exportedInterfaceProtocol;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithWithExportedObject:(id)arg1 exportedInterfaceProtocol:(id)arg2 ;
@end

