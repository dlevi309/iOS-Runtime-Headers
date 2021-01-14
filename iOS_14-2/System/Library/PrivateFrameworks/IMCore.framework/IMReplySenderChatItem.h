/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMSenderChatItem.h>

@class NSString;

@interface IMReplySenderChatItem : IMSenderChatItem {

	NSString* _threadIdentifier;

}

@property (nonatomic,readonly) NSString * threadIdentifier;              //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
-(Class)__ck_chatItemClass;
-(NSString *)threadIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithItem:(id)arg1 handle:(id)arg2 threadIdentifier:(id)arg3 ;
@end

