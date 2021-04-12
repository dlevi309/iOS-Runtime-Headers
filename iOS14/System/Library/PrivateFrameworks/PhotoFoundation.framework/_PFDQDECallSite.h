/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAddresses:(id)arg1 ;
-(id)backtraceWithPrefix:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

