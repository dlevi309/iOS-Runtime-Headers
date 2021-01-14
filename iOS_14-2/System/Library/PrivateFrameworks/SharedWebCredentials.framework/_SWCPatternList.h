/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _SWCPatternList : NSObject <SWCRedactedDescription, NSSecureCoding> {

	SWCPatternStorage _storage[0];

}

@property (readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
+(id)patternListWithDetailsDictionary:(id)arg1 defaults:(id)arg2 ;
+(id)patternListWithArray:(id)arg1 ;
+(id)patternListWithDetailsDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)count;
-(id)_descriptionDebug:(BOOL)arg1 redacted:(BOOL)arg2 ;
-(void)enumeratePatternsWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)evaluateWithURLComponents:(id)arg1 substitutionVariables:(id)arg2 auditToken:(const SCD_Struct_SW0*)arg3 matchingPattern:(id*)arg4 index:(unsigned long long*)arg5 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)redactedDescription;
-(BOOL)isEqual:(id)arg1 ;
@end

