/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(void)applyToStatistic:(id)arg1 ;
-(TIKeyboardLayout *)keyLayout;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(NSArray *)candidates;
-(void)setString:(NSString *)arg1 ;
-(void)setCandidates:(NSArray *)arg1 ;
-(void)setKeyLayout:(TIKeyboardLayout *)arg1 ;
@end

