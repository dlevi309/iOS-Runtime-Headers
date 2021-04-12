/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTSectionDisplayDescriptor.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSOrderedSet, SFRankingFeedback, NTPBSectionDisplayDescriptor;

@interface NTSection : NSObject <NTSectionDisplayDescriptor, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _personalizationFeatureID;
	NSOrderedSet* _items;
	SFRankingFeedback* _rankingFeedback;
	NSString* _referralBarName;
	NSString* _backingTagID;
	NSString* _actionTitle;
	NSURL* _actionURL;
	NTPBSectionDisplayDescriptor* _displayDescriptor;

}

@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * actionTitle;                                        //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,copy) NSURL * actionURL;                                             //@synthesize actionURL=_actionURL - In the implementation block
@property (nonatomic,copy) NSOrderedSet * items;                                          //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) SFRankingFeedback * rankingFeedback;                           //@synthesize rankingFeedback=_rankingFeedback - In the implementation block
@property (nonatomic,copy) NTPBSectionDisplayDescriptor * displayDescriptor;              //@synthesize displayDescriptor=_displayDescriptor - In the implementation block
@property (nonatomic,copy) NSString * referralBarName;                                    //@synthesize referralBarName=_referralBarName - In the implementation block
@property (nonatomic,copy) NSString * backingTagID;                                       //@synthesize backingTagID=_backingTagID - In the implementation block
@property (nonatomic,copy,readonly) NSString * personalizationFeatureID;                  //@synthesize personalizationFeatureID=_personalizationFeatureID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * nameColorLight; 
@property (nonatomic,copy,readonly) NSString * nameColorDark; 
@property (nonatomic,copy,readonly) NSURL * nameActionURL; 
@property (nonatomic,copy,readonly) NSString * backgroundColorLight; 
@property (nonatomic,copy,readonly) NSString * backgroundColorDark; 
+(BOOL)supportsSecureCoding;
+(id)_itemClassesByType;
-(void)setItems:(NSOrderedSet *)arg1 ;
-(id)init;
-(void)setActionURL:(NSURL *)arg1 ;
-(void)setActionTitle:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)actionTitle;
-(NSOrderedSet *)items;
-(NSString *)name;
-(NSString *)backgroundColorLight;
-(NSString *)backgroundColorDark;
-(id)description;
-(NSString *)nameColorLight;
-(NSString *)personalizationFeatureID;
-(NSString *)referralBarName;
-(void)setRankingFeedback:(SFRankingFeedback *)arg1 ;
-(SFRankingFeedback *)rankingFeedback;
-(NSString *)nameColorDark;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSURL *)actionURL;
-(NSString *)identifier;
-(void)setReferralBarName:(NSString *)arg1 ;
-(NSString *)backingTagID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)nameActionURL;
-(id)initWithIdentifier:(id)arg1 actionTitle:(id)arg2 actionURL:(id)arg3 personalizationFeatureID:(id)arg4 items:(id)arg5 rankingFeedback:(id)arg6 displayDescriptor:(id)arg7 referralBarName:(id)arg8 backingTagID:(id)arg9 ;
-(NTPBSectionDisplayDescriptor *)displayDescriptor;
-(void)setBackingTagID:(NSString *)arg1 ;
-(void)setDisplayDescriptor:(NTPBSectionDisplayDescriptor *)arg1 ;
@end

