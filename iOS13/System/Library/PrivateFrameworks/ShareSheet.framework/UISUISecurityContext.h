/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isActive;
-(void)activate;
-(void)deactivate;
-(id)initWithSecurityScopedResources:(id)arg1 ;
-(NSArray *)securityScopedResources;
-(id)securityScopedResourcesMatchingPredicate:(/*^block*/id)arg1 ;
-(id)accessibleURLs;
@end

