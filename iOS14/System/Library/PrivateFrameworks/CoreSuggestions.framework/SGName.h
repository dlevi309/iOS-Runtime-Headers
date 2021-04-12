/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/SGObject.h>

@class NSString, SGExtractionInfo;

@interface SGName : SGObject {

	NSString* _fullName;
	NSString* _firstName;
	NSString* _middleName;
	NSString* _lastName;
	NSString* _prefix;
	NSString* _suffix;
	SGExtractionInfo* _extractionInfo;

}

@property (nonatomic,readonly) NSString * fullName;                            //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                           //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * middleName;                          //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                            //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * prefix;                              //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,readonly) NSString * suffix;                              //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,readonly) SGExtractionInfo * extractionInfo;              //@synthesize extractionInfo=_extractionInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nameWithFirstName:(id)arg1 lastName:(id)arg2 middleName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 withRecordId:(id)arg7 origin:(id)arg8 ;
+(id)nameWithFirstName:(id)arg1 lastName:(id)arg2 withRecordId:(id)arg3 origin:(id)arg4 ;
+(id)nameWithFirstName:(id)arg1 withRecordId:(id)arg2 origin:(id)arg3 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)fullName;
-(NSString *)prefix;
-(BOOL)isEqualToName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)suffix;
-(id)initWithFirstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 recordId:(id)arg7 origin:(id)arg8 extractionInfo:(id)arg9 ;
-(id)name;
-(id)description;
-(NSString *)middleName;
-(SGExtractionInfo *)extractionInfo;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithFirstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 recordId:(id)arg7 origin:(id)arg8 ;
@end

