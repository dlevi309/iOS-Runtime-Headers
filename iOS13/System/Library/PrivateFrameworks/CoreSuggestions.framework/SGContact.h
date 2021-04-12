/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SGRecordId, SGName, NSArray, SGDateComponents, NSString;

@interface SGContact : NSObject <NSCopying, NSSecureCoding> {

	int _updatedFields;
	SGRecordId* _recordId;
	SGName* _name;
	NSArray* _emailAddresses;
	NSArray* _phones;
	NSArray* _postalAddresses;
	NSArray* _instantMessageAddresses;
	NSArray* _socialProfiles;
	SGDateComponents* _birthday;
	NSString* _photoPath;
	unsigned long long _significance;
	unsigned long long _significanceOrigin;

}

@property (nonatomic,copy) SGName * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSArray * emailAddresses;                             //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,copy) NSArray * phones;                                     //@synthesize phones=_phones - In the implementation block
@property (nonatomic,copy) NSArray * postalAddresses;                            //@synthesize postalAddresses=_postalAddresses - In the implementation block
@property (nonatomic,copy) NSArray * instantMessageAddresses;                    //@synthesize instantMessageAddresses=_instantMessageAddresses - In the implementation block
@property (nonatomic,copy) NSArray * socialProfiles;                             //@synthesize socialProfiles=_socialProfiles - In the implementation block
@property (nonatomic,copy) SGDateComponents * birthday;                          //@synthesize birthday=_birthday - In the implementation block
@property (assign,nonatomic) unsigned long long significance;                    //@synthesize significance=_significance - In the implementation block
@property (assign,nonatomic) unsigned long long significanceOrigin;              //@synthesize significanceOrigin=_significanceOrigin - In the implementation block
@property (assign,nonatomic) int updatedFields;                                  //@synthesize updatedFields=_updatedFields - In the implementation block
@property (nonatomic,readonly) SGRecordId * recordId;                            //@synthesize recordId=_recordId - In the implementation block
@property (nonatomic,copy,readonly) NSString * photoPath;                        //@synthesize photoPath=_photoPath - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 instantMessageAddresses:(id)arg6 socialProfiles:(id)arg7 ;
+(id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 instantMessageAddresses:(id)arg6 socialProfiles:(id)arg7 birthday:(id)arg8 photoPath:(id)arg9 ;
+(id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SGName *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(SGName *)arg1 ;
-(NSArray *)emailAddresses;
-(SGDateComponents *)birthday;
-(id)addresses;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(unsigned long long)significance;
-(void)setSignificance:(unsigned long long)arg1 ;
-(SGRecordId *)recordId;
-(NSArray *)instantMessageAddresses;
-(NSArray *)socialProfiles;
-(void)setInstantMessageAddresses:(NSArray *)arg1 ;
-(NSArray *)postalAddresses;
-(void)setBirthday:(SGDateComponents *)arg1 ;
-(void)setSocialProfiles:(NSArray *)arg1 ;
-(void)setPostalAddresses:(NSArray *)arg1 ;
-(NSArray *)phones;
-(void)setPhones:(NSArray *)arg1 ;
-(unsigned long long)richness;
-(id)cnContact;
-(int)updatedFields;
-(NSString *)photoPath;
-(BOOL)isEqualToContact:(id)arg1 ;
-(id)initWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 instantMessageAddresses:(id)arg6 socialProfiles:(id)arg7 birthday:(id)arg8 photoPath:(id)arg9 ;
-(BOOL)containsSuggestions;
-(BOOL)containsDetailSuggestions;
-(id)detailForRecordId:(id)arg1 ;
-(BOOL)hasNonTrivialInfo;
-(unsigned long long)significanceOrigin;
-(void)setSignificanceOrigin:(unsigned long long)arg1 ;
-(void)setUpdatedFields:(int)arg1 ;
@end

