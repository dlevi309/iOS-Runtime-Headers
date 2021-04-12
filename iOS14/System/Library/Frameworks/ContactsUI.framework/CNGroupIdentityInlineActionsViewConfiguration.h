/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class NSArray, NSDictionary;

@interface CNGroupIdentityInlineActionsViewConfiguration : NSObject {

	BOOL _displaysUnavailableActionTypes;
	NSArray* _supportedActionTypes;
	NSDictionary* _actionsPerType;

}

@property (nonatomic,readonly) BOOL displaysUnavailableActionTypes;              //@synthesize displaysUnavailableActionTypes=_displaysUnavailableActionTypes - In the implementation block
@property (nonatomic,readonly) NSArray * supportedActionTypes;                   //@synthesize supportedActionTypes=_supportedActionTypes - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionsPerType;                    //@synthesize actionsPerType=_actionsPerType - In the implementation block
-(NSArray *)supportedActionTypes;
-(NSDictionary *)actionsPerType;
-(id)initWithActions:(id)arg1 displaysUnavailableActionTypes:(BOOL)arg2 ;
-(id)initWithDefaultActionItems:(id)arg1 displaysUnavailableActionTypes:(BOOL)arg2 ;
-(BOOL)displaysUnavailableActionTypes;
@end

