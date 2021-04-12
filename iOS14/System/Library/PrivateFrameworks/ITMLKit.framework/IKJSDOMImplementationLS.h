/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@protocol IKJSDOMImplementationLS <JSExport>
@property (getter=synchronousMode,readonly) long long MODE_SYNCHRONOUS; 
@property (getter=asynchronousMode,readonly) long long MODE_ASYNCHRONOUS; 
@required
-(long long)synchronousMode;
-(id)createLSInput;
-(id)createLSParser:(long long)arg1 :(id)arg2;
-(id)createLSSerializer;
-(long long)asynchronousMode;

@end

