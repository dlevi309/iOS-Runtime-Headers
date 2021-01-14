/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SXScrollPosition : NSObject <NSSecureCoding>

@property (nonatomic,readonly) NSString * jsonRepresentation; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(NSString *)jsonRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithJSONRepresentation:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 exactly:(BOOL)arg2 ;
-(BOOL)jsonDictionaryRepresentationIsValid:(id)arg1 exactly:(BOOL)arg2 ;
@end

