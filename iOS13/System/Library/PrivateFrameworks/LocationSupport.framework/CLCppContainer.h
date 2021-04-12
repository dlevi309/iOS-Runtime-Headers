/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLCppContainer : NSObject <NSSecureCoding> {

	const void* _cppObjectPtr;
	/*^block*/id _destructor;

}

@property (assign,nonatomic) const void* cppObjectPtr;              //@synthesize cppObjectPtr=_cppObjectPtr - In the implementation block
@property (nonatomic,copy) id destructor;                           //@synthesize destructor=_destructor - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)containerWithObject:(void*)arg1 destructor:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithObject:(void*)arg1 destructor:(/*^block*/id)arg2 ;
-(void)setCppObjectPtr:(const void*)arg1 ;
-(void)setDestructor:(id)arg1 ;
-(id)destructor;
-(const void*)cppObjectPtr;
@end

