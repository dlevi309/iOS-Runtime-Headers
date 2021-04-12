/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLModelSerialize.h>

@class NSString;

@interface TMLFunction : NSObject <TMLModelSerialize> {

	NSString* _functionName;
	NSString* _functionBody;

}

@property (nonatomic,readonly) NSString * functionName;              //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,readonly) NSString * functionBody;              //@synthesize functionBody=_functionBody - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decode:(const ProtobufCMessage*)arg1 ;
-(void)encode:(ProtobufCMessage*)arg1 ;
-(NSString *)functionName;
-(id)initWithName:(id)arg1 body:(id)arg2 ;
-(NSString *)functionBody;
@end

