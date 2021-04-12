/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSArray;

@interface _PFDQDECallSite : NSObject <NSCopying> {

	NSData* _addresses;
	NSArray* _symbols;

}
+(void)initialize;
+(id)currentCallSite;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAddresses:(id)arg1 ;
-(id)backtraceWithPrefix:(id)arg1 ;
@end

