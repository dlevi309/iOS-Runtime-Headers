/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/CPTemplateDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NAFuture;

@interface CPInformationTemplate : CPTemplate <CPTemplateDelegate, NSSecureCoding> {

	long long _layout;
	NSString* _title;
	NSArray* _items;
	NSArray* _actions;

}

@property (nonatomic,retain) NAFuture * templateProviderFuture; 
@property (nonatomic,readonly) long long layout;                             //@synthesize layout=_layout - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * items;                                  //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                //@synthesize actions=_actions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setActions:(NSArray *)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(NSArray *)actions;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)performUpdate;
-(NSArray *)items;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(long long)layout;
-(void)handleActionForControlIdentifier:(id)arg1 ;
-(id)_sanitizeItems:(id)arg1 ;
-(id)_sanitizeButtons:(id)arg1 ;
-(id)initWithTitle:(id)arg1 layout:(long long)arg2 items:(id)arg3 actions:(id)arg4 ;
-(void)updateTemplatePropertiesFromTemplate:(id)arg1 ;
@end

