/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>

@class NSURL, NSString;

@interface HFURLItem : HFItem {

	NSURL* _URL;
	NSString* _title;

}

@property (nonatomic,copy) NSURL * URL;                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithTitle:(id)arg1 URL:(id)arg2 ;
@end

