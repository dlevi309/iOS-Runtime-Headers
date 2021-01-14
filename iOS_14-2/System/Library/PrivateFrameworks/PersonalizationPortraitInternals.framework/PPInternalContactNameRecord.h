/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <PersonalizationPortrait/PPContactNameRecord.h>

@class PPPBContactNameRecord;

@interface PPInternalContactNameRecord : PPContactNameRecord {

	PPPBContactNameRecord* _pbRecord;

}
-(id)phoneticMiddleName;
-(id)cityNames;
-(id)streetNames;
-(id)firstName;
-(id)lastName;
-(id)phoneticLastName;
-(id)phoneticFirstName;
-(unsigned char)changeType;
-(id)initWithPBContactNameRecord:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 score:(double)arg2 source:(unsigned char)arg3 sourceIdentifier:(id)arg4 changeType:(unsigned char)arg5 firstName:(id)arg6 phoneticFirstName:(id)arg7 middleName:(id)arg8 phoneticMiddleName:(id)arg9 lastName:(id)arg10 phoneticLastName:(id)arg11 organizationName:(id)arg12 jobTitle:(id)arg13 nickname:(id)arg14 relatedNames:(id)arg15 streetNames:(id)arg16 cityNames:(id)arg17 ;
-(id)organizationName;
-(double)score;
-(void)setScore:(double)arg1 ;
-(id)nickname;
-(id)relatedNames;
-(id)jobTitle;
-(id)middleName;
-(id)clientCopy;
-(id)identifier;
-(id)pbRecord;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)source;
-(id)sourceIdentifier;
@end

