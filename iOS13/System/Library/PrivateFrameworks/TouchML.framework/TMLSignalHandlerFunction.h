/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TouchML-Structs.h>
#import <TouchML/TMLFunction.h>
#import <libobjc.A.dylib/TMLModelSerialize.h>

@class NSString;

@interface TMLSignalHandlerFunction : TMLFunction <TMLModelSerialize> {

	NSString* _signalName;

}

@property (nonatomic,readonly) NSString * signalName;               //@synthesize signalName=_signalName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decode:(const ProtobufCMessage*)arg1 ;
-(void)encode:(ProtobufCMessage*)arg1 ;
-(NSString *)signalName;
-(id)initWithSignalName:(id)arg1 functionName:(id)arg2 body:(id)arg3 ;
@end

