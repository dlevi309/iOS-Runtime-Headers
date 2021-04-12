/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSURL, NSNumber;

@interface HDReferenceExtractionResult : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _completeResources;
	NSArray* _incompleteResources;
	NSArray* _unresolvableReferences;
	NSURL* _nextSearchResultURL;
	NSNumber* _rulesVersion;

}

@property (nonatomic,copy,readonly) NSArray * completeResources;                   //@synthesize completeResources=_completeResources - In the implementation block
@property (nonatomic,copy,readonly) NSArray * incompleteResources;                 //@synthesize incompleteResources=_incompleteResources - In the implementation block
@property (nonatomic,copy,readonly) NSArray * unresolvableReferences;              //@synthesize unresolvableReferences=_unresolvableReferences - In the implementation block
@property (nonatomic,copy,readonly) NSURL * nextSearchResultURL;                   //@synthesize nextSearchResultURL=_nextSearchResultURL - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rulesVersion;                       //@synthesize rulesVersion=_rulesVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCompleteResources:(id)arg1 incompleteResources:(id)arg2 unresolvableReferences:(id)arg3 nextSearchResultURL:(id)arg4 rulesVersion:(id)arg5 ;
-(NSArray *)completeResources;
-(NSArray *)incompleteResources;
-(NSArray *)unresolvableReferences;
-(NSURL *)nextSearchResultURL;
-(NSNumber *)rulesVersion;
@end

