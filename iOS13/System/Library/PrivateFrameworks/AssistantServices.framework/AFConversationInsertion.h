/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@class AceObject, NSString, NSIndexPath;

@interface AFConversationInsertion : NSObject {

	BOOL _transient;
	long long _conversationItemType;
	AceObject* _aceObject;
	NSString* _aceCommandIdentifier;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) long long conversationItemType;                    //@synthesize conversationItemType=_conversationItemType - In the implementation block
@property (nonatomic,readonly) AceObject * aceObject;                             //@synthesize aceObject=_aceObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * aceCommandIdentifier;              //@synthesize aceCommandIdentifier=_aceCommandIdentifier - In the implementation block
@property (getter=isTransient,nonatomic,readonly) BOOL transient;                 //@synthesize transient=_transient - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                           //@synthesize indexPath=_indexPath - In the implementation block
-(NSIndexPath *)indexPath;
-(BOOL)isTransient;
-(AceObject *)aceObject;
-(NSString *)aceCommandIdentifier;
-(long long)conversationItemType;
-(id)initWithConversationItemType:(long long)arg1 aceObject:(id)arg2 aceCommandIdentifier:(id)arg3 transient:(BOOL)arg4 indexPath:(id)arg5 ;
@end

