/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
*/


@class NSString, NSInvocation, NSArray;

@interface _PBProperty : NSObject {

	NSString* _name;
	Class _objectType;
	Class _subObjectType;
	char _type;
	char _subType;
	NSInvocation* _setter;
	NSInvocation* _getter;
	NSInvocation* _has;
	NSInvocation* _count;
	NSInvocation* _convertToString;
	NSInvocation* _convertFromString;
	/*function pointer*/void* _toDictionaryReprFn;
	/*function pointer*/void* _fromDictionaryReprFn;
	NSString* _structName;
	NSArray* _structFields;
	unsigned long long _structSize;

}
-(id)description;
-(void)dealloc;
@end

