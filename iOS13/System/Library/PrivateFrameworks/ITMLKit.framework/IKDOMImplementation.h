/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMImplementation.h>
#import <libobjc.A.dylib/IKJSDOMImplementationLS.h>

@interface IKDOMImplementation : IKJSObject <IKJSDOMImplementation, IKJSDOMImplementationLS>

@property (getter=synchronousMode,readonly) long long MODE_SYNCHRONOUS; 
@property (getter=asynchronousMode,readonly) long long MODE_ASYNCHRONOUS; 
-(long long)synchronousMode;
-(id)createDocument:(id)arg1 :(id)arg2 ;
-(id)createLSParser:(long long)arg1 :(id)arg2 ;
-(id)createLSSerializer;
-(id)createLSInput;
-(long long)asynchronousMode;
@end

