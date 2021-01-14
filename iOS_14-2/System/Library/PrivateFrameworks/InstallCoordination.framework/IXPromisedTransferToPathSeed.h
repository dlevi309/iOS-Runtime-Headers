/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <InstallCoordination/IXOwnedDataPromiseSeed.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface IXPromisedTransferToPathSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying> {

	BOOL _shouldCopy;
	BOOL _tryDeltaCopy;
	NSURL* _transferPath;

}

@property (nonatomic,retain) NSURL * transferPath;              //@synthesize transferPath=_transferPath - In the implementation block
@property (assign,nonatomic) BOOL shouldCopy;                   //@synthesize shouldCopy=_shouldCopy - In the implementation block
@property (assign,nonatomic) BOOL tryDeltaCopy;                 //@synthesize tryDeltaCopy=_tryDeltaCopy - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)clientPromiseClass;
-(void)setTransferPath:(NSURL *)arg1 ;
-(NSURL *)transferPath;
-(BOOL)shouldCopy;
-(void)setShouldCopy:(BOOL)arg1 ;
-(BOOL)tryDeltaCopy;
-(void)setTryDeltaCopy:(BOOL)arg1 ;
@end
