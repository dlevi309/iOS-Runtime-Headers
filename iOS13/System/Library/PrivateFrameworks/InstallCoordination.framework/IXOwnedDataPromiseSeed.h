/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)clientPromiseClass;
-(NSURL *)stagingBaseDir;
-(void)setStagingBaseDir:(NSURL *)arg1 ;
@end

