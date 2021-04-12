/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardCandidate;

@interface TITypologyRecordTextAccepted : TITypologyRecord {

	TIKeyboardCandidate* _candidate;

}

@property (nonatomic,retain) TIKeyboardCandidate * candidate;              //@synthesize candidate=_candidate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)changedText;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(void)applyToStatistic:(id)arg1 ;
-(id)textSummary;
-(id)initWithCoder:(id)arg1 ;
-(TIKeyboardCandidate *)candidate;
@end

