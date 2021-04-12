/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)label;
-(id)localizedLabel;
-(SGExtractionInfo *)extractionInfo;
-(unsigned long long)extractionType;
-(id)initWithLabel:(id)arg1 extractionInfo:(id)arg2 recordId:(id)arg3 ;
-(id)initWithLabel:(id)arg1 extractionType:(unsigned long long)arg2 recordId:(id)arg3 origin:(id)arg4 ;
-(BOOL)isEqualToLabeledObject:(id)arg1 ;
@end

