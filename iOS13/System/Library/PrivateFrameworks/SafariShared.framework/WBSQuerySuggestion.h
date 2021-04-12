/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString;

@interface WBSQuerySuggestion : NSObject {

	NSString* _title;
	NSString* _identifier;
	long long _type;
	id _tag;

}

@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id tag;                                  //@synthesize tag=_tag - In the implementation block
-(id)init;
-(long long)type;
-(NSString *)identifier;
-(NSString *)title;
-(id)tag;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 type:(long long)arg3 tag:(id)arg4 ;
@end

