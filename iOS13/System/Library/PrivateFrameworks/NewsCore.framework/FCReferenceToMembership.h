/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString;

@interface FCReferenceToMembership : NSObject {

	NSString* _identifier;
	NSString* _membershipID;

}

@property (nonatomic,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * membershipID;              //@synthesize membershipID=_membershipID - In the implementation block
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithRecord:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(NSString *)membershipID;
@end

