/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)signalName;
-(void)encode:(ProtobufCMessage*)arg1 ;
-(id)initWithSignalName:(id)arg1 functionName:(id)arg2 body:(id)arg3 ;
@end

