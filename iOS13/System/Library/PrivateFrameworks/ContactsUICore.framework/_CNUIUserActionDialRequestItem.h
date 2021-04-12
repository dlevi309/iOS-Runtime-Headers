/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/CNUIUserActionItem.h>

@protocol CNTUDialRequest;
@interface _CNUIUserActionDialRequestItem : CNUIUserActionItem {

	id<CNTUDialRequest> _dialRequest;

}

@property (nonatomic,readonly) id<CNTUDialRequest> dialRequest;              //@synthesize dialRequest=_dialRequest - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)performActionWithContext:(id)arg1 ;
-(id<CNTUDialRequest>)dialRequest;
-(id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 dialRequest:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
@end

