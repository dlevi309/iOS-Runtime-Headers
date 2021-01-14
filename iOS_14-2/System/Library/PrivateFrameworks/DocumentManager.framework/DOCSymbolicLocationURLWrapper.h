/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/

#import <DocumentManager/DocumentManager-Structs.h>
#import <FileProvider/FPSandboxingURLWrapper.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DOCSymbolicLocationURLWrapper : FPSandboxingURLWrapper <NSCopying, NSSecureCoding> {

	unsigned long long _symbolicLocation;

}

@property (assign,nonatomic) unsigned long long symbolicLocation;              //@synthesize symbolicLocation=_symbolicLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSymbolicLocation:(unsigned long long)arg1 ;
-(unsigned long long)symbolicLocation;
@end

