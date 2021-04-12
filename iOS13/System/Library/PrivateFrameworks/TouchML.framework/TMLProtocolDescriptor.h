/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


#import <TouchML/TouchML-Structs.h>
@class NSString, NSSet, NSMutableDictionary, Protocol, NSDictionary;

@interface TMLProtocolDescriptor : NSObject {

	NSString* _protocolName;
	NSSet* _implementsProtocols;
	NSMutableDictionary* _signals;
	Protocol* _objcProtocol;
	NSString* _objcProtocolName;

}

@property (nonatomic,readonly) NSString * protocolName;                  //@synthesize protocolName=_protocolName - In the implementation block
@property (nonatomic,readonly) NSDictionary * signals;                   //@synthesize signals=_signals - In the implementation block
@property (nonatomic,readonly) Protocol * objcProtocol;                  //@synthesize objcProtocol=_objcProtocol - In the implementation block
@property (nonatomic,copy) NSString * objcProtocolName;                  //@synthesize objcProtocolName=_objcProtocolName - In the implementation block
@property (nonatomic,readonly) NSSet * implementsProtocols;              //@synthesize implementsProtocols=_implementsProtocols - In the implementation block
+(id)decode:(const ProtobufCMessage*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encode:(ProtobufCMessage*)arg1 ;
-(NSString *)protocolName;
-(NSDictionary *)signals;
-(NSSet *)implementsProtocols;
-(id)initWithName:(id)arg1 implementsProtocols:(id)arg2 ;
-(void)setObjcProtocolName:(NSString *)arg1 ;
-(void)addSignal:(id)arg1 ;
-(Protocol *)objcProtocol;
-(NSString *)objcProtocolName;
@end

