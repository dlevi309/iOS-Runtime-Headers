/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSData;

@interface IDSGlobalLinkMessage : NSObject {

	long long _command;
	NSData* _hmacKeyData;
	IDSGlobalLinkAttribute _attributes[20];
	int _numAttribute;

}

@property (nonatomic,readonly) long long command;              //@synthesize command=_command - In the implementation block
@property (readonly) NSData * hmacKeyData;                     //@synthesize hmacKeyData=_hmacKeyData - In the implementation block
+(id)messageWithCommand:(long long)arg1 attributes:(id)arg2 ;
+(id)messageWithBuffer:(char*)arg1 length:(int)arg2 ;
-(void)dealloc;
-(void)setAttributes:(id)arg1 ;
-(id)initWithCommand:(long long)arg1 ;
-(long long)command;
-(BOOL)getAttribute:(long long)arg1 attribute:(IDSGlobalLinkAttribute*)arg2 ;
-(BOOL)write:(char*)arg1 outputLength:(int*)arg2 ;
-(BOOL)verifyHMacDigestWithKey:(id)arg1 inputBuffer:(char*)arg2 inputLength:(int)arg3 ;
-(BOOL)read:(char*)arg1 inputLength:(int)arg2 ;
-(BOOL)_addAttribute:(IDSGlobalLinkAttribute*)arg1 ;
-(void)_addUInt16Attribute:(long long)arg1 value:(unsigned short)arg2 ;
-(void)_addBinaryDataAttribute:(long long)arg1 value:(id)arg2 ;
-(void)_addUInt32Attribute:(long long)arg1 value:(unsigned)arg2 ;
-(void)_addAddressAttribute:(long long)arg1 value:(sockaddr*)arg2 ;
-(void)_addUInt64Attribute:(long long)arg1 value:(unsigned long long)arg2 ;
-(NSData *)hmacKeyData;
@end

