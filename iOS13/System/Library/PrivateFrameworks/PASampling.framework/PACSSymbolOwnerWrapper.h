/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PACSRefWrapper.h>

@class NSString;

@interface PACSSymbolOwnerWrapper : PACSRefWrapper {

	NSString* _path;
	BOOL _usedDsymForUUID;

}

@property (__weak,readonly) NSString * path; 
@property (assign) BOOL usedDsymForUUID;                  //@synthesize usedDsymForUUID=_usedDsymForUUID - In the implementation block
-(id)debugDescription;
-(NSString *)path;
-(id)initWithSymbolOwner:(CSTypeRef)arg1 ;
-(id)initWithSymbolOwner:(CSTypeRef)arg1 andPath:(id)arg2 ;
-(BOOL)usedDsymForUUID;
-(void)setUsedDsymForUUID:(BOOL)arg1 ;
@end

