/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@class AceObject, NSString, NSIndexPath;

@interface AFConversationInsertion : NSObject {

	BOOL _transient;
	BOOL _supplemental;
	BOOL _immersiveExperience;
	long long _conversationItemType;
	AceObject* _aceObject;
	NSString* _aceCommandIdentifier;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) long long conversationItemType;                                     //@synthesize conversationItemType=_conversationItemType - In the implementation block
@property (nonatomic,readonly) AceObject * aceObject;                                              //@synthesize aceObject=_aceObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * aceCommandIdentifier;                               //@synthesize aceCommandIdentifier=_aceCommandIdentifier - In the implementation block
@property (getter=isTransient,nonatomic,readonly) BOOL transient;                                  //@synthesize transient=_transient - In the implementation block
@property (getter=isSupplemental,nonatomic,readonly) BOOL supplemental;                            //@synthesize supplemental=_supplemental - In the implementation block
@property (getter=isImmersiveExperience,nonatomic,readonly) BOOL immersiveExperience;              //@synthesize immersiveExperience=_immersiveExperience - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                            //@synthesize indexPath=_indexPath - In the implementation block
-(BOOL)isTransient;
-(NSIndexPath *)indexPath;
-(id)initWithConversationItemType:(long long)arg1 aceObject:(id)arg2 aceCommandIdentifier:(id)arg3 transient:(BOOL)arg4 supplemental:(BOOL)arg5 immersiveExperience:(BOOL)arg6 indexPath:(id)arg7 ;
-(NSString *)aceCommandIdentifier;
-(BOOL)isSupplemental;
-(BOOL)isImmersiveExperience;
-(AceObject *)aceObject;
-(long long)conversationItemType;
@end

