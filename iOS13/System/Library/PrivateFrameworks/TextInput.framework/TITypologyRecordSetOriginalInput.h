/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyRecord.h>

@class NSString;

@interface TITypologyRecordSetOriginalInput : TITypologyRecord {

	NSString* _originalInput;

}

@property (nonatomic,copy) NSString * originalInput;              //@synthesize originalInput=_originalInput - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDescription;
-(void)setOriginalInput:(NSString *)arg1 ;
-(NSString *)originalInput;
-(void)applyToStatistic:(id)arg1 ;
@end

