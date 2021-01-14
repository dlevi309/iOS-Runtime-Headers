/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class DMFControlGroupIdentifier, NSArray, NSDate;

@interface DMFJoinControlGroupRequest : DMFTaskRequest {

	DMFControlGroupIdentifier* _groupIdentifier;
	NSArray* _leaderIdentifiers;
	NSDate* _expirationDate;

}

@property (nonatomic,retain) DMFControlGroupIdentifier * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * leaderIdentifiers;                                //@synthesize leaderIdentifiers=_leaderIdentifiers - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                    //@synthesize expirationDate=_expirationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setGroupIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(DMFControlGroupIdentifier *)groupIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)leaderIdentifiers;
-(void)setLeaderIdentifiers:(NSArray *)arg1 ;
@end

