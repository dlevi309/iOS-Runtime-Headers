/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


@class CNContactStore, EFLazyCache;

@interface EMCachingContactStore : NSObject {

	CNContactStore* _cnStore;
	EFLazyCache* _displayNameCache;

}

@property (nonatomic,retain) EFLazyCache * displayNameCache;              //@synthesize displayNameCache=_displayNameCache - In the implementation block
@property (nonatomic,readonly) CNContactStore * cnStore;                  //@synthesize cnStore=_cnStore - In the implementation block
-(id)init;
-(id)initWithStore:(id)arg1 ;
-(void)_invalidateDisplayNameCache;
-(id)displayNameForEmailAddress:(id)arg1 abbreviated:(BOOL)arg2 ;
-(EFLazyCache *)displayNameCache;
-(id)_fetchDisplayNameForEmailAddress:(id)arg1 abbreviated:(BOOL)arg2 ;
-(id)displayNameForEmailAddress:(id)arg1 ;
-(void)setDisplayNameCache:(EFLazyCache *)arg1 ;
-(CNContactStore *)cnStore;
@end

