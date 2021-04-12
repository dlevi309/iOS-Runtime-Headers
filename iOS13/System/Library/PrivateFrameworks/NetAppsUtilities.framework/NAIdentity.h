/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

#import <NetAppsUtilities/NetAppsUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NAIdentity : NSObject <NSCopying> {

	NSArray* _characteristics;

}

@property (nonatomic,copy) NSArray * characteristics;              //@synthesize characteristics=_characteristics - In the implementation block
+(id)na_identity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCharacteristics:(NSArray *)arg1 ;
-(NSArray *)characteristics;
-(unsigned long long)hashOfObject:(id)arg1 ;
-(BOOL)isObject:(id)arg1 equalToObject:(id)arg2 ;
-(id)initWithCharacteristics:(id)arg1 ;
@end

