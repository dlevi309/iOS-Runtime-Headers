/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isSensitive;
-(CNFuture *)url;
-(id)description;
-(id)performActionWithContext:(id)arg1 shouldCurateIfPerformed:(BOOL)arg2 ;
-(unsigned long long)hash;
-(id)performActionWithContext:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 isSensitive:(BOOL)arg5 group:(long long)arg6 options:(unsigned long long)arg7 ;
-(id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
@end

