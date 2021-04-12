/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/SGLabeledObject.h>

@class NSDateComponents;

@interface SGDateComponents : SGLabeledObject {

	NSDateComponents* _dateComponents;

}

@property (nonatomic,readonly) NSDateComponents * dateComponents;              //@synthesize dateComponents=_dateComponents - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dateComponents:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 withRecordId:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDateComponents *)dateComponents;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToDateComponents:(id)arg1 ;
-(id)initWithDateComponents:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
@end

