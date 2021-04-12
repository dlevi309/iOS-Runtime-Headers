/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TPPolicyVersion, NSArray, NSSet;

@interface TPSyncingPolicy : NSObject <NSSecureCoding> {

	int _syncUserControllableViews;
	NSString* _model;
	TPPolicyVersion* _version;
	NSArray* _keyViewMapping;
	NSSet* _viewList;
	NSSet* _viewsToPiggybackTLKs;
	NSSet* _userControllableViews;

}

@property (readonly) NSString * model;                           //@synthesize model=_model - In the implementation block
@property (readonly) TPPolicyVersion * version;                  //@synthesize version=_version - In the implementation block
@property (readonly) NSArray * keyViewMapping;                   //@synthesize keyViewMapping=_keyViewMapping - In the implementation block
@property (readonly) NSSet * viewList;                           //@synthesize viewList=_viewList - In the implementation block
@property (readonly) NSSet * viewsToPiggybackTLKs;               //@synthesize viewsToPiggybackTLKs=_viewsToPiggybackTLKs - In the implementation block
@property (readonly) NSSet * userControllableViews;              //@synthesize userControllableViews=_userControllableViews - In the implementation block
@property (readonly) int syncUserControllableViews;              //@synthesize syncUserControllableViews=_syncUserControllableViews - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)model;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)viewList;
-(TPPolicyVersion *)version;
-(NSArray *)keyViewMapping;
-(int)syncUserControllableViews;
-(id)initWithModel:(id)arg1 version:(id)arg2 viewList:(id)arg3 userControllableViews:(id)arg4 syncUserControllableViews:(int)arg5 viewsToPiggybackTLKs:(id)arg6 keyViewMapping:(id)arg7 ;
-(id)mapDictionaryToView:(id)arg1 ;
-(BOOL)syncUserControllableViewsAsBoolean;
-(BOOL)isSyncingEnabledForView:(id)arg1 ;
-(NSSet *)viewsToPiggybackTLKs;
-(NSSet *)userControllableViews;
@end

