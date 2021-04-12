/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/


@class NSString, NSArray, NSDictionary, TFFeedbackEntry;

@interface TFFeedbackEntryGroup : NSObject {

	BOOL _toggleable;
	NSString* _identifier;
	NSString* _title;
	NSArray* _entries;
	NSString* _headerText;
	NSDictionary* _headerTextLinkMap;
	NSString* _footerText;
	NSDictionary* _footerTextLinkMap;
	unsigned long long _election;
	TFFeedbackEntry* _groupToggleEntry;

}

@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * entries;                             //@synthesize entries=_entries - In the implementation block
@property (nonatomic,copy,readonly) NSString * headerText;                         //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * headerTextLinkMap;              //@synthesize headerTextLinkMap=_headerTextLinkMap - In the implementation block
@property (nonatomic,copy,readonly) NSString * footerText;                         //@synthesize footerText=_footerText - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * footerTextLinkMap;              //@synthesize footerTextLinkMap=_footerTextLinkMap - In the implementation block
@property (nonatomic,readonly) unsigned long long election;                        //@synthesize election=_election - In the implementation block
@property (getter=isToggleable,nonatomic,readonly) BOOL toggleable;                //@synthesize toggleable=_toggleable - In the implementation block
@property (nonatomic,readonly) TFFeedbackEntry * groupToggleEntry;                 //@synthesize groupToggleEntry=_groupToggleEntry - In the implementation block
-(NSArray *)entries;
-(NSString *)footerText;
-(NSString *)headerText;
-(NSString *)identifier;
-(NSString *)title;
-(id)initWithIdentifier:(id)arg1 entries:(id)arg2 title:(id)arg3 election:(unsigned long long)arg4 headerText:(id)arg5 headerTextLinkMap:(id)arg6 footerText:(id)arg7 footerTextLinkMap:(id)arg8 ;
-(NSDictionary *)headerTextLinkMap;
-(NSDictionary *)footerTextLinkMap;
-(unsigned long long)election;
-(BOOL)isToggleable;
-(TFFeedbackEntry *)groupToggleEntry;
-(unsigned long long)numberOfVisibleItemsForIncludeState:(BOOL)arg1 ;
-(id)visibleEntryForIndex:(unsigned long long)arg1 ;
@end

