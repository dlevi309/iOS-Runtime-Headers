/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreSuggestions/SGObject.h>

@class NSString, SGExtractionInfo;

@interface SGLabeledObject : SGObject {

	NSString* _label;
	SGExtractionInfo* _extractionInfo;

}

@property (nonatomic,readonly) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) SGExtractionInfo * extractionInfo;              //@synthesize extractionInfo=_extractionInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long extractionType; 
+(BOOL)supportsSecureCoding;
-(id)localizedLabel;
-(void)encodeWithCoder:(id)arg1 ;
-(SGExtractionInfo *)extractionInfo;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)extractionType;
-(id)initWithLabel:(id)arg1 extractionInfo:(id)arg2 recordId:(id)arg3 ;
-(id)initWithLabel:(id)arg1 extractionType:(unsigned long long)arg2 recordId:(id)arg3 origin:(id)arg4 ;
-(BOOL)isEqualToLabeledObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
@end

