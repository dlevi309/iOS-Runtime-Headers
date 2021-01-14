/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <InstallCoordination/IXOwnedDataPromise.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class IXPromisedInMemoryDictionarySeed;

@interface IXPromisedInMemoryDictionary : IXOwnedDataPromise <NSSecureCoding>

@property (nonatomic,retain) IXPromisedInMemoryDictionarySeed * seed; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)resetWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(Class)seedClass;
-(id)initWithName:(id)arg1 client:(unsigned long long)arg2 dictionary:(id)arg3 ;
@end

