/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <InstallCoordination/IXOwnedDataPromise.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class IXPromisedTransferToPathSeed, NSURL;

@interface IXPromisedTransferToPath : IXOwnedDataPromise <NSSecureCoding>

@property (nonatomic,retain) IXPromisedTransferToPathSeed * seed; 
@property (assign,getter=isComplete,nonatomic) BOOL complete; 
@property (assign,nonatomic) double percentComplete; 
@property (nonatomic,retain) NSURL * transferPath; 
@property (assign,nonatomic) BOOL shouldCopy; 
@property (assign,nonatomic) BOOL tryDeltaCopy; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_doInit;
-(id)initWithCoder:(id)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3 ;
-(void)setTransferPath:(NSURL *)arg1 ;
-(NSURL *)transferPath;
-(BOOL)shouldCopy;
-(void)setShouldCopy:(BOOL)arg1 ;
-(BOOL)tryDeltaCopy;
-(void)setTryDeltaCopy:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 client:(unsigned long long)arg2 transferPath:(id)arg3 diskSpaceNeeded:(unsigned long long)arg4 ;
-(Class)seedClass;
@end

