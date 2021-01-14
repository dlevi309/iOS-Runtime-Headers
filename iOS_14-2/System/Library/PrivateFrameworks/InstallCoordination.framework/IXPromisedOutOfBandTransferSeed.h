/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <InstallCoordination/IXOpaqueDataPromiseSeed.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IXPromisedOutOfBandTransferSeed : IXOpaqueDataPromiseSeed <NSSecureCoding, NSCopying>
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)clientPromiseClass;
@end

