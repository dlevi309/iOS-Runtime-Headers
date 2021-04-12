/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

