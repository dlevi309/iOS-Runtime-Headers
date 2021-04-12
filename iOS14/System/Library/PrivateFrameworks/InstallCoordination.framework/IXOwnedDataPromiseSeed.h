/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <InstallCoordination/IXDataPromiseSeed.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface IXOwnedDataPromiseSeed : IXDataPromiseSeed <NSSecureCoding, NSCopying> {

	NSURL* _stagingBaseDir;

}

@property (nonatomic,retain) NSURL * stagingBaseDir;              //@synthesize stagingBaseDir=_stagingBaseDir - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)clientPromiseClass;
-(NSURL *)stagingBaseDir;
-(void)setStagingBaseDir:(NSURL *)arg1 ;
@end

