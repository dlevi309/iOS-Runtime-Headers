/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)functionName;
-(void)encode:(ProtobufCMessage*)arg1 ;
-(id)initWithName:(id)arg1 body:(id)arg2 ;
-(NSString *)functionBody;
@end

