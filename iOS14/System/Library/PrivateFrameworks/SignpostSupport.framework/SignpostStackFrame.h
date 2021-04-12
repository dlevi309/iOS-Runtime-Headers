/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/


@class NSUUID;

@interface SignpostStackFrame : NSObject {

	NSUUID* _symbolOwnerUUID;
	unsigned long long _offset;

}

@property (nonatomic,readonly) NSUUID * symbolOwnerUUID;               //@synthesize symbolOwnerUUID=_symbolOwnerUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
-(id)debugDescription;
-(unsigned long long)offset;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUUID:(id)arg1 offset:(unsigned long long)arg2 ;
-(NSUUID *)symbolOwnerUUID;
-(id)_serializableArrayRepresentation;
-(id)initWithArrayRepresentation:(id)arg1 ;
@end

