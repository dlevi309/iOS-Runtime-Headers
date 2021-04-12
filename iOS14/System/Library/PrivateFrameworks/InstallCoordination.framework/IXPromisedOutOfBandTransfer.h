/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <InstallCoordination/IXOpaqueDataPromise.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class IXPromisedOutOfBandTransferSeed;

@interface IXPromisedOutOfBandTransfer : IXOpaqueDataPromise <NSSecureCoding>

@property (nonatomic,retain) IXPromisedOutOfBandTransferSeed * seed; 
@property (assign,getter=isComplete,nonatomic) BOOL complete; 
@property (assign,nonatomic) double percentComplete; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3 ;
-(Class)seedClass;
@end

