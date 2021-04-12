/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)eventStreamWithName:(id)arg1 ;
+(id)eventStreamWithName:(id)arg1 valueType:(id)arg2 ;
+(id)fromPBCodable:(id)arg1 ;
-(id)toPBCodable;
-(_DKObjectType *)eventValueType;
-(_CDEventStreamProperties *)eventProperties;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 valueType:(id)arg2 cache:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

