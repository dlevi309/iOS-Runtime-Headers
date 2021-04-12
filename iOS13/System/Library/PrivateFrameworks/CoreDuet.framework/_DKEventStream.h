/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKProtobufConverting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CDEventStreamProperties, NSString, _DKObjectType;

@interface _DKEventStream : NSObject <_DKProtobufConverting, NSSecureCoding> {

	_CDEventStreamProperties* _eventProperties;
	NSString* _name;
	_DKObjectType* _eventValueType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) _CDEventStreamProperties * eventProperties;              //@synthesize eventProperties=_eventProperties - In the implementation block
@property (readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (readonly) _DKObjectType * eventValueType;                          //@synthesize eventValueType=_eventValueType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fromPBCodable:(id)arg1 ;
+(id)eventStreamWithName:(id)arg1 ;
+(id)eventStreamWithName:(id)arg1 valueType:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toPBCodable;
-(id)initWithName:(id)arg1 valueType:(id)arg2 cache:(id)arg3 ;
-(_DKObjectType *)eventValueType;
-(_CDEventStreamProperties *)eventProperties;
@end

