/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthOntology.framework/HealthOntology
*/

#import <HealthOntology/HealthOntology-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HNRelationship : NSObject <NSCopying> {

	NSString* _type;

}

@property (nonatomic,copy,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(id)initWithType:(id)arg1 ;
@end

