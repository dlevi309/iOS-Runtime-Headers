/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/


@class NSUUID;

@interface SignpostStackFrame : NSObject {

	NSUUID* _symbolOwnerUUID;
	unsigned long long _offset;

}

@property (nonatomic,readonly) NSUUID * symbolOwnerUUID;               //@synthesize symbolOwnerUUID=_symbolOwnerUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)offset;
-(NSUUID *)symbolOwnerUUID;
-(id)initWithUUID:(id)arg1 offset:(unsigned long long)arg2 ;
-(id)_serializableArrayRepresentation;
-(id)initWithArrayRepresentation:(id)arg1 ;
@end

