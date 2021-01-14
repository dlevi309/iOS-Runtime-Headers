/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSString;

@interface SKUITrendingSearch : NSObject {

	NSString* _term;
	NSString* _URLString;

}

@property (nonatomic,retain) NSString * term;                   //@synthesize term=_term - In the implementation block
@property (nonatomic,retain) NSString * URLString;              //@synthesize URLString=_URLString - In the implementation block
-(NSString *)URLString;
-(NSString *)term;
-(void)setURLString:(NSString *)arg1 ;
-(void)setTerm:(NSString *)arg1 ;
@end

