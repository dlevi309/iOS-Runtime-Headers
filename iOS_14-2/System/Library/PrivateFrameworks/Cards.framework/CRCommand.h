/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

@class NSDictionary;


@protocol CRCommand <NSObject,NSCopying>
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long commandDirection; 
@required
-(void)setUserInfo:(id)arg1;
-(NSDictionary *)userInfo;
-(unsigned long long)commandDirection;
-(void)setCommandDirection:(unsigned long long)arg1;

@end

