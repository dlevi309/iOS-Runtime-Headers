/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchControlGroupIdentifiersResultObject : CATTaskResultObject {

	NSArray* _groupIdentifiers;

}

@property (nonatomic,copy) NSArray * groupIdentifiers;              //@synthesize groupIdentifiers=_groupIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithGroupIdentifiers:(id)arg1 ;
-(NSArray *)groupIdentifiers;
-(void)setGroupIdentifiers:(NSArray *)arg1 ;
@end

