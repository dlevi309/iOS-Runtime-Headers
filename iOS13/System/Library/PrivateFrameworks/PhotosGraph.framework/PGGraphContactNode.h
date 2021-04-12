/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphNode.h>

@class NSString, NSDate;

@interface PGGraphContactNode : PGGraphNode {

	NSString* _contactIdentifier;

}

@property (nonatomic,readonly) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (readonly) NSDate * birthdayDate; 
@property (readonly) NSDate * potentialBirthdayDate; 
-(NSString *)contactIdentifier;
-(NSDate *)birthdayDate;
-(NSDate *)potentialBirthdayDate;
-(unsigned long long)genderHintForGivenName;
@end

