/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthOntology.framework/HealthOntology
*/

#import <HealthOntology/HealthOntology-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface HNNode : NSObject <NSCopying> {

	NSString* _identifier;
	NSDictionary* _properties;

}

@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSDictionary *)properties;
-(id)initWithIdentifier:(id)arg1 properties:(id)arg2 ;
@end

