/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface UISUISecurityContext : NSObject <NSSecureCoding> {

	long long _activationCount;
	NSMutableArray* _URLsBeingAccessed;
	NSArray* _securityScopedResources;

}

@property (nonatomic,readonly) NSArray * securityScopedResources;              //@synthesize securityScopedResources=_securityScopedResources - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
+(BOOL)supportsSecureCoding;
-(BOOL)isActive;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)securityScopedResources;
-(void)deactivate;
-(void)activate;
-(id)description;
-(id)accessibleURLs;
-(id)securityScopedResourcesMatchingPredicate:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSecurityScopedResources:(id)arg1 ;
@end

