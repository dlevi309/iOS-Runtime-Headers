/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyRecord.h>

@class NSString, TIKeyboardLayout, NSArray;

@interface TITypologyRecordReplacements : TITypologyRecord {

	NSString* _string;
	TIKeyboardLayout* _keyLayout;
	NSArray* _candidates;

}

@property (nonatomic,copy) NSString * string;                           //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * keyLayout;              //@synthesize keyLayout=_keyLayout - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                      //@synthesize candidates=_candidates - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)string;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(id)shortDescription;
-(NSArray *)candidates;
-(void)setCandidates:(NSArray *)arg1 ;
-(TIKeyboardLayout *)keyLayout;
-(void)setKeyLayout:(TIKeyboardLayout *)arg1 ;
-(void)applyToStatistic:(id)arg1 ;
@end

