/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NUVersion;

@interface NUIdentifier : NSObject <NSCopying> {

	NSString* _nameSpace;
	NSString* _name;
	NUVersion* _version;

}

@property (readonly) NSString * nameSpace;                         //@synthesize nameSpace=_nameSpace - In the implementation block
@property (readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (readonly) NUVersion * version;                          //@synthesize version=_version - In the implementation block
@property (readonly) NSString * stringRepresentation; 
+(id)defaultNameSpace;
+(BOOL)validateName:(id)arg1 error:(out id*)arg2 ;
+(id)latestIdentifierWithName:(id)arg1 ;
+(id)latestIdentifierWithNameSpace:(id)arg1 name:(id)arg2 ;
+(id)identifierWithString:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validateIdentifierString:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validateIdentifierString:(id)arg1 space:(out id*)arg2 name:(out id*)arg3 version:(out id*)arg4 error:(out id*)arg5 ;
+(id)identifierRegularExpression;
+(BOOL)validateNameSpace:(id)arg1 error:(out id*)arg2 ;
+(id)validNameSpaceRegularExpression;
+(id)validNameRegularExpression;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NUVersion *)version;
-(NSString *)nameSpace;
-(NSString *)stringRepresentation;
-(BOOL)isEqualToIdentifier:(id)arg1 ;
-(id)initWithName:(id)arg1 version:(id)arg2 ;
-(id)initWithNameSpace:(id)arg1 name:(id)arg2 version:(id)arg3 ;
-(id)identifierWithVersion:(id)arg1 ;
@end

