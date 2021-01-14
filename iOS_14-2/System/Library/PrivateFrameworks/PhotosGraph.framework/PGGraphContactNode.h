/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSString, NSDate;

@interface PGGraphContactNode : PGGraphOptimizedNode {

	NSString* _name;
	NSString* _contactIdentifier;
	NSDate* _birthdayDate;
	NSDate* _potentialBirthdayDate;

}

@property (readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (readonly) NSString * contactIdentifier;                //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (readonly) NSDate * birthdayDate;                       //@synthesize birthdayDate=_birthdayDate - In the implementation block
@property (readonly) NSDate * potentialBirthdayDate;              //@synthesize potentialBirthdayDate=_potentialBirthdayDate - In the implementation block
-(NSString *)contactIdentifier;
-(NSDate *)birthdayDate;
-(id)init;
-(unsigned short)domain;
-(NSString *)name;
-(id)description;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(NSDate *)potentialBirthdayDate;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
-(unsigned long long)sexHintForGivenName;
@end

