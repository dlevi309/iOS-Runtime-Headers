/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface __PartitionedCacheLookupKey : NSObject <NSCopying> {

	NSString* _mainDocOrigin;
	NSString* _domain;

}

@property (nonatomic,retain) NSString * mainDocOrigin;              //@synthesize mainDocOrigin=_mainDocOrigin - In the implementation block
@property (nonatomic,retain) NSString * domain;                     //@synthesize domain=_domain - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
-(id)initWithPartition:(id)arg1 domain:(id)arg2 ;
-(NSString *)mainDocOrigin;
-(void)setMainDocOrigin:(NSString *)arg1 ;
@end

