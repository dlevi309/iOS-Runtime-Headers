/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isObject:(id)arg1 equalToObject:(id)arg2 ;
-(unsigned long long)hashOfObject:(id)arg1 ;
-(unsigned long long)hash;
-(NSArray *)characteristics;
-(void)setCharacteristics:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCharacteristics:(id)arg1 ;
@end

