/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString;

@interface FCReferenceToMembership : NSObject {

	NSString* _identifier;
	NSString* _membershipID;

}

@property (nonatomic,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * membershipID;              //@synthesize membershipID=_membershipID - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithIdentifier:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)membershipID;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
@end

