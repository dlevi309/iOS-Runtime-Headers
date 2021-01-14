/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <IMSharedUtilities/IMRemoteObjectCoding.h>

@interface IMTUConversationItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding> {

	unsigned long long _flags;

}

@property (assign,nonatomic) unsigned long long flags;              //@synthesize flags=_flags - In the implementation block
-(id)_newChatItems;
-(BOOL)_hasMessageChatItem;
-(unsigned long long)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(id)conversationUUID;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isFromMe;
-(void)setFlags:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyDictionaryRepresentation;
@end

