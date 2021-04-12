/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface SSVShowDialogRequest : SSRequest <SSXPCCoding> {

	NSObject*<OS_xpc_object> _dialog;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> encodedDialog;              //@synthesize dialog=_dialog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithEncodedDialog:(id)arg1 ;
-(NSObject*<OS_xpc_object>)encodedDialog;
-(void)startWithDialogResponseBlock:(/*^block*/id)arg1 ;
@end

