/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSString;

@interface IKAppKeyboardHint : NSObject {

	NSString* _badge;
	NSString* _text;
	NSString* _searchTerm;

}

@property (nonatomic,copy,readonly) NSString * badge;                   //@synthesize badge=_badge - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                    //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchTerm;              //@synthesize searchTerm=_searchTerm - In the implementation block
-(NSString *)badge;
-(NSString *)searchTerm;
-(NSString *)text;
-(id)initWithBadge:(id)arg1 text:(id)arg2 searchTerm:(id)arg3 ;
@end

