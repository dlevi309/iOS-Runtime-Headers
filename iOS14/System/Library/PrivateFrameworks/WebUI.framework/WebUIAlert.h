/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
*/


@class NSString, NSArray;

@interface WebUIAlert : NSObject {

	int _otherAction;
	long long _indexOfSelectedIdentity;
	int _type;
	int _defaultAction;
	int _tableAction;
	int _hideAction;
	/*^block*/id _actionHandler;
	NSString* _title;
	NSString* _bodyText;
	id _context;
	NSArray* _identities;
	NSArray* _titles;

}

@property (nonatomic,copy) id actionHandler;                             //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,readonly) int type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * bodyText;                 //@synthesize bodyText=_bodyText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * buttonTitles; 
@property (nonatomic,readonly) int defaultAction;                        //@synthesize defaultAction=_defaultAction - In the implementation block
@property (nonatomic,readonly) int tableAction;                          //@synthesize tableAction=_tableAction - In the implementation block
@property (assign,nonatomic) int hideAction;                             //@synthesize hideAction=_hideAction - In the implementation block
@property (nonatomic,retain) id context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * identities;                       //@synthesize identities=_identities - In the implementation block
@property (nonatomic,copy,readonly) NSArray * titles;                    //@synthesize titles=_titles - In the implementation block
@property (nonatomic,readonly) id selectedIdentity; 
-(NSArray *)buttonTitles;
-(NSString *)bodyText;
-(id)actionHandler;
-(void)setIdentities:(NSArray *)arg1 ;
-(void)setActionHandler:(id)arg1 ;
-(id)context;
-(id)selectedIdentity;
-(void)setHideAction:(int)arg1 ;
-(int)defaultAction;
-(int)type;
-(NSArray *)titles;
-(NSArray *)identities;
-(int)hideAction;
-(id)initWithType:(int)arg1 title:(id)arg2 bodyText:(id)arg3 defaultAction:(int)arg4 otherAction:(int)arg5 tableAction:(int)arg6 ;
-(id)initWithType:(int)arg1 title:(id)arg2 bodyText:(id)arg3 defaultAction:(int)arg4 otherAction:(int)arg5 ;
-(NSString *)title;
-(void)setContext:(id)arg1 ;
-(int)actionForButtonTag:(long long)arg1 ;
-(void)setSelectedTableItemIndex:(long long)arg1 ;
-(int)tableAction;
-(id)_buttonTitleForAction:(int)arg1 ;
-(id)initWithType:(int)arg1 title:(id)arg2 defaultAction:(int)arg3 otherAction:(int)arg4 tableAction:(int)arg5 ;
-(id)initWithType:(int)arg1 title:(id)arg2 defaultAction:(int)arg3 otherAction:(int)arg4 ;
@end

