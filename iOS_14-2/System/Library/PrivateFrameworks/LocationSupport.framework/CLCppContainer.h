/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLCppContainer : NSObject <NSSecureCoding> {

	const void* _cppObjectPtr;
	/*^block*/id _destructor;
	unsigned long long _binaryVersion;
	unsigned long long _sizeOfType;

}

@property (assign,nonatomic) const void* cppObjectPtr;                        //@synthesize cppObjectPtr=_cppObjectPtr - In the implementation block
@property (nonatomic,copy) id destructor;                                     //@synthesize destructor=_destructor - In the implementation block
@property (nonatomic,readonly) unsigned long long binaryVersion;              //@synthesize binaryVersion=_binaryVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeOfType;                 //@synthesize sizeOfType=_sizeOfType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)containerWithObject:(void*)arg1 destructor:(/*^block*/id)arg2 binaryVersion:(unsigned long long)arg3 typeSize:(unsigned long long)arg4 ;
-(id)destructor;
-(unsigned long long)sizeOfType;
-(void)encodeWithCoder:(id)arg1 ;
-(const void*)cppObjectPtr;
-(unsigned long long)binaryVersion;
-(void)setCppObjectPtr:(const void*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)setDestructor:(id)arg1 ;
-(id)initWithObject:(void*)arg1 destructor:(/*^block*/id)arg2 binaryVersion:(unsigned long long)arg3 typeSize:(unsigned long long)arg4 ;
-(void)dealloc;
@end

