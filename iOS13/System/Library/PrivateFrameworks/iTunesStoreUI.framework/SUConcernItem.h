/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isDefaultConcern;
-(void)setDefaultConcern:(BOOL)arg1 ;
@end

