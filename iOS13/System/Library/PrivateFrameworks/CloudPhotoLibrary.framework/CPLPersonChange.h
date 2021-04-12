/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLRecordChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSDictionary;

@interface CPLPersonChange : CPLRecordChange <NSSecureCoding, NSCopying> {

	NSString* _fullName;
	long long _personType;
	long long _manualSortOrder;
	NSString* _displayName;
	long long _verifiedType;
	NSString* _mergeTargetPersonIdentifier;
	NSData* _contactDescriptor;

}

@property (nonatomic,copy) NSData * contactDescriptor;                            //@synthesize contactDescriptor=_contactDescriptor - In the implementation block
@property (nonatomic,copy) NSString * fullName;                                   //@synthesize fullName=_fullName - In the implementation block
@property (assign,nonatomic) long long personType;                                //@synthesize personType=_personType - In the implementation block
@property (assign,nonatomic) long long manualSortOrder;                           //@synthesize manualSortOrder=_manualSortOrder - In the implementation block
@property (nonatomic,copy) NSDictionary * contactMatchingDictionary; 
@property (nonatomic,copy) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) long long verifiedType;                              //@synthesize verifiedType=_verifiedType - In the implementation block
@property (nonatomic,copy) NSString * mergeTargetPersonIdentifier;                //@synthesize mergeTargetPersonIdentifier=_mergeTargetPersonIdentifier - In the implementation block
+(BOOL)serverSupportsGraphPeopleHome;
+(BOOL)serverSupportsMergeTargetRef;
+(BOOL)cplShouldIgnorePropertyForCoding:(id)arg1 ;
+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSDictionary *)contactMatchingDictionary;
-(NSString *)fullName;
-(long long)verifiedType;
-(void)setContactMatchingDictionary:(NSDictionary *)arg1 ;
-(NSString *)mergeTargetPersonIdentifier;
-(void)setVerifiedType:(long long)arg1 ;
-(long long)manualSortOrder;
-(long long)personType;
-(void)setFullName:(NSString *)arg1 ;
-(void)setPersonType:(long long)arg1 ;
-(void)setManualSortOrder:(long long)arg1 ;
-(void)setMergeTargetPersonIdentifier:(NSString *)arg1 ;
-(BOOL)supportsDeletion;
-(BOOL)supportsDirectDeletion;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg1 ;
-(NSData *)contactDescriptor;
-(void)setContactDescriptor:(NSData *)arg1 ;
-(BOOL)validateRecordForTracker:(id)arg1 ;
@end

