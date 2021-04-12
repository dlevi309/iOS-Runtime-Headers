/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSArray, NSDictionary;

@interface AMSFamilyInfoLookupResult : NSObject {

	BOOL _cached;
	NSArray* _familyMembers;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (getter=isCached,nonatomic,readonly) BOOL cached;                          //@synthesize cached=_cached - In the implementation block
@property (nonatomic,readonly) NSArray * familyMembers;                              //@synthesize familyMembers=_familyMembers - In the implementation block
+(id)_familyMembersFromDictionaryRepresentation:(id)arg1 ;
-(id)description;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)isCached;
-(NSArray *)familyMembers;
-(id)initWithDictionaryRepresentation:(id)arg1 cached:(BOOL)arg2 ;
@end

