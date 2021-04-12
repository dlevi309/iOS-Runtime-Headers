/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_UTConcreteType.h>

@protocol OS_dispatch_queue;
@class NSObject, NSNumber, NSDictionary, NSData, NSString, NSURL, NSArray;

@interface _UTDeclaredType : _UTConcreteType {

	NSObject*<OS_dispatch_queue> _additionalInfoQueue;
	unsigned _flags;
	NSNumber* _version;
	NSDictionary* _localizedDescriptionDictionary;
	NSData* _declaringBundleBookmark;
	NSString* _declaringBundleDelegate;
	NSURL* _declaringBundleURL;
	NSString* _kextName;
	NSDictionary* _tagSpecification;
	NSArray* _conformsTo;
	NSArray* _iconFiles;
	NSURL* _parentIconURL;
	NSString* _referenceURLString;
	NSString* _glyphName;
	NSString* _iconName;

}
+(BOOL)supportsSecureCoding;
-(id)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)version;
-(id)initWithContext:(LSContext*)arg1 UTTypeID:(unsigned)arg2 UTTypeData:(const SCD_Struct_UT22*)arg3 propertiesToResolve:(unsigned long long)arg4 ;
-(id)parentIdentifiers;
-(id)declaration;
-(id)declaringBundleURL;
-(BOOL)isDeclared;
-(id)tagSpecification;
-(id)referenceURL;
-(BOOL)_isActive;
-(BOOL)_isPublic;
-(BOOL)_isAppleInternal;
-(id)_localizedDescriptionDictionary;
-(id)_kernelExtensionName;
-(id)_iconURL;
-(id)_glyphName;
-(id)_iconName;
-(BOOL)_isWildcard;
-(BOOL)needsWorkaroundFor22092605;
-(id)_iconURLCheckingParents:(BOOL)arg1 ;
@end

