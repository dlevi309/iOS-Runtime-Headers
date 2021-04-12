/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDateComponents *)dateComponents;
-(id)initWithDateComponents:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4 ;
-(BOOL)isEqualToDateComponents:(id)arg1 ;
@end

