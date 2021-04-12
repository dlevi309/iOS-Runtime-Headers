/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _SWCSubstitutionVariableList : NSObject <SWCRedactedDescription, NSSecureCoding> {

	SWCSubstitutionVariable _variables[0];

}

@property (readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
+(id)substitutionVariableListWithDictionary:(id)arg1 ;
+(id)cheapBuiltInSubstitutionVariableList;
+(id)expensiveBuiltInSubstitutionVariableList;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)count;
-(id)_descriptionDebug:(BOOL)arg1 redacted:(BOOL)arg2 ;
-(void)enumerateSubstitutionVariablesWithBlock:(/*^block*/id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)redactedDescription;
-(BOOL)isEqual:(id)arg1 ;
@end

