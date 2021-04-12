/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString, NSArray, NSDictionary;

@interface AMSNotificationSettingsSection : NSObject {

	NSString* _footer;
	NSString* _identifier;
	NSArray* _items;
	NSString* _title;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSString * footer;                                    //@synthesize footer=_footer - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                      //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSString * title;                                     //@synthesize title=_title - In the implementation block
-(id)description;
-(NSString *)identifier;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(NSArray *)items;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)footer;
-(id)initWithTitle:(id)arg1 footer:(id)arg2 items:(id)arg3 ;
@end

