/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <InstallCoordination/IXDataPromise.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, IXOwnedDataPromiseSeed;

@interface IXOwnedDataPromise : IXDataPromise <NSSecureCoding> {

	NSURL* _stagedPath;

}

@property (nonatomic,retain) IXOwnedDataPromiseSeed * seed; 
@property (nonatomic,retain) NSURL * stagedPath;                         //@synthesize stagedPath=_stagedPath - In the implementation block
@property (nonatomic,readonly) NSURL * stagingBaseDir; 
-(NSURL *)stagingBaseDir;
-(void)setStagedPath:(NSURL *)arg1 ;
-(Class)seedClass;
-(NSURL *)stagedPath;
@end

