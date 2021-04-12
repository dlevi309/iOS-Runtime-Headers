/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/CNUIUserActionItem.h>

@class CNFuture;

@interface _CNUIUserActionURLItem : CNUIUserActionItem {

	BOOL _isSensitive;
	CNFuture* _url;

}

@property (nonatomic,readonly) CNFuture * url;                //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL isSensitive;              //@synthesize isSensitive=_isSensitive - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CNFuture *)url;
-(BOOL)isSensitive;
-(id)performActionWithContext:(id)arg1 ;
-(id)performActionWithContext:(id)arg1 shouldCurateIfPerformed:(BOOL)arg2 ;
-(id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 isSensitive:(BOOL)arg5 group:(long long)arg6 options:(unsigned long long)arg7 ;
-(id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
@end

