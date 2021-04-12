/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/_UTType.h>

@class NSString, NSSet;

@interface _UTConcreteType : _UTType {

	NSString* _identifier;
	NSSet* _pedigree;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(id)version;
-(id)parentIdentifiers;
-(id)declaration;
-(id)declaringBundleURL;
-(BOOL)isDynamic;
-(BOOL)isDeclared;
-(id)tagSpecification;
-(id)referenceURL;
-(BOOL)conformsToType:(id)arg1 ;
-(BOOL)conformsToTypeIdentifier:(id)arg1 ;
-(BOOL)_isActive;
-(BOOL)_isPublic;
-(BOOL)_isAppleInternal;
-(id)_unlocalizedDescription;
-(id)_localizedDescriptionDictionary;
-(id)_kernelExtensionName;
-(id)_iconURL;
-(id)initWithIdentifier:(id)arg1 pedigree:(id)arg2 ;
-(id)_pedigree;
@end

