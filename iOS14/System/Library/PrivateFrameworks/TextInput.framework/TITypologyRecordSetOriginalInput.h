/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyRecord.h>

@class NSString;

@interface TITypologyRecordSetOriginalInput : TITypologyRecord {

	NSString* _originalInput;

}

@property (nonatomic,copy) NSString * originalInput;              //@synthesize originalInput=_originalInput - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)originalInput;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(void)applyToStatistic:(id)arg1 ;
-(void)setOriginalInput:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

