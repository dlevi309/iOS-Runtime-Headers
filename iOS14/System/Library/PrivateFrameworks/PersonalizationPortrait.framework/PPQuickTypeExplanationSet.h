/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet;

@interface PPQuickTypeExplanationSet : NSObject <NSSecureCoding> {

	NSMutableSet* _set;

}
+(BOOL)supportsSecureCoding;
+(id)stringFromExplanation:(unsigned char)arg1 ;
+(id)uniqueKeycodeFromExplanation:(unsigned char)arg1 ;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(void)push:(unsigned char)arg1 ;
-(id)init;
-(BOOL)isEqualToQuickTypeExplanationSet:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

