/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class NSString;

@interface SUConcernItem : NSObject {

	BOOL _default;
	NSString* _identifier;
	NSString* _title;

}

@property (assign,getter=isDefaultConcern,nonatomic) BOOL defaultConcern;              //@synthesize default=_default - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                         //@synthesize title=_title - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(void)dealloc;
-(BOOL)isDefaultConcern;
-(void)setDefaultConcern:(BOOL)arg1 ;
@end

