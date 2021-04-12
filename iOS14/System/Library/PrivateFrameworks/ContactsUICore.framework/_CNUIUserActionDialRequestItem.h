/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/CNUIUserActionItem.h>

@protocol CNTUDialRequest;
@interface _CNUIUserActionDialRequestItem : CNUIUserActionItem {

	id<CNTUDialRequest> _dialRequest;

}

@property (nonatomic,readonly) id<CNTUDialRequest> dialRequest;              //@synthesize dialRequest=_dialRequest - In the implementation block
-(id)description;
-(unsigned long long)hash;
-(id)performActionWithContext:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id<CNTUDialRequest>)dialRequest;
-(id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 dialRequest:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
@end

