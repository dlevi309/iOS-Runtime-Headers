/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchControlGroupIdentifiersResultObject : CATTaskResultObject {

	NSArray* _groupIdentifiers;

}

@property (nonatomic,copy,readonly) NSArray * groupIdentifiers;              //@synthesize groupIdentifiers=_groupIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)groupIdentifiers;
-(id)initWithGroupIdentifiers:(id)arg1 ;
@end

