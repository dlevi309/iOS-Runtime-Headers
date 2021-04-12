/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <PersonalizationPortrait/PPContactNameRecord.h>

@class PPPBContactNameRecord;

@interface PPInternalContactNameRecord : PPContactNameRecord {

	PPPBContactNameRecord* _pbRecord;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)identifier;
-(unsigned char)source;
-(unsigned char)changeType;
-(id)middleName;
-(id)nickname;
-(double)score;
-(void)setScore:(double)arg1 ;
-(id)organizationName;
-(id)sourceIdentifier;
-(id)firstName;
-(id)lastName;
-(id)phoneticMiddleName;
-(id)jobTitle;
-(id)phoneticFirstName;
-(id)phoneticLastName;
-(id)relatedNames;
-(id)initWithIdentifier:(id)arg1 score:(double)arg2 source:(unsigned char)arg3 sourceIdentifier:(id)arg4 changeType:(unsigned char)arg5 firstName:(id)arg6 phoneticFirstName:(id)arg7 middleName:(id)arg8 phoneticMiddleName:(id)arg9 lastName:(id)arg10 phoneticLastName:(id)arg11 organizationName:(id)arg12 jobTitle:(id)arg13 nickname:(id)arg14 relatedNames:(id)arg15 streetNames:(id)arg16 cityNames:(id)arg17 ;
-(id)streetNames;
-(id)cityNames;
-(id)initWithPBContactNameRecord:(id)arg1 ;
-(id)clientCopy;
-(id)pbRecord;
@end

