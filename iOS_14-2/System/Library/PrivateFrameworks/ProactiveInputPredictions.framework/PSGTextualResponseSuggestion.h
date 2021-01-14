/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
*/

#import <ProactiveInputPredictions/ProactiveInputPredictions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PSGTextualResponseSuggestion : NSObject <NSSecureCoding, NSCopying> {

	NSString* _responseText;
	NSString* _responseCategory;

}

@property (nonatomic,readonly) NSString * responseText;                  //@synthesize responseText=_responseText - In the implementation block
@property (nonatomic,readonly) NSString * responseCategory;              //@synthesize responseCategory=_responseCategory - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)responseText;
-(id)initWithText:(id)arg1 category:(id)arg2 ;
-(NSString *)responseCategory;
-(BOOL)isEqualToTextualSuggestion:(id)arg1 ;
@end

