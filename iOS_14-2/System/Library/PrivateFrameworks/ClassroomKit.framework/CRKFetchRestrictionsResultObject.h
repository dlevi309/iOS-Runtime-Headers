/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchRestrictionsResultObject : CATTaskResultObject {

	NSDictionary* _valuesByRestriction;

}

@property (nonatomic,copy) NSDictionary * valuesByRestriction;              //@synthesize valuesByRestriction=_valuesByRestriction - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)valuesByRestriction;
-(void)setValuesByRestriction:(NSDictionary *)arg1 ;
@end

