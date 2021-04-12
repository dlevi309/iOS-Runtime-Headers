/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CNContactStore *)cnStore;
-(id)displayNameForEmailAddress:(id)arg1 ;
-(void)setDisplayNameCache:(EFLazyCache *)arg1 ;
@end

