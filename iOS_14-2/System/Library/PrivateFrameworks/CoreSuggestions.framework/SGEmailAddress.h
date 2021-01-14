/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/SGLabeledObject.h>

@class NSString;

@interface SGEmailAddress : SGLabeledObject {

	NSString* _emailAddress;

}

@property (nonatomic,readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)emailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 withRecordId:(id)arg4 ;
+(id)emailAddress:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 withRecordId:(id)arg4 ;
+(id)emailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 withRecordId:(id)arg4 origin:(id)arg5 ;
-(NSString *)emailAddress;
-(id)initWithEmailAddress:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToEmailAddress:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

