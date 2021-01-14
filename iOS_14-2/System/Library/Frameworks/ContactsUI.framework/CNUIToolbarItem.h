/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class NSString;

@interface CNUIToolbarItem : NSObject {

	BOOL _isDefault;
	BOOL _isCancel;
	NSString* _title;
	/*^block*/id _actionBlock;

}

@property (assign,nonatomic) BOOL isDefault;              //@synthesize isDefault=_isDefault - In the implementation block
@property (assign,nonatomic) BOOL isCancel;               //@synthesize isCancel=_isCancel - In the implementation block
@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id actionBlock;                //@synthesize actionBlock=_actionBlock - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isCancel;
-(BOOL)isDefault;
-(id)actionBlock;
-(void)setIsDefault:(BOOL)arg1 ;
-(void)setIsCancel:(BOOL)arg1 ;
-(void)setActionBlock:(id)arg1 ;
-(NSString *)title;
@end

