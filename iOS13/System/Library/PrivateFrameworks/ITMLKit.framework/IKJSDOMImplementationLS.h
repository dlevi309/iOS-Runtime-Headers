/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@protocol IKJSDOMImplementationLS <JSExport>
@property (getter=synchronousMode,readonly) long long MODE_SYNCHRONOUS; 
@property (getter=asynchronousMode,readonly) long long MODE_ASYNCHRONOUS; 
@required
-(long long)synchronousMode;
-(id)createLSParser:(long long)arg1 :(id)arg2;
-(id)createLSSerializer;
-(id)createLSInput;
-(long long)asynchronousMode;

@end

