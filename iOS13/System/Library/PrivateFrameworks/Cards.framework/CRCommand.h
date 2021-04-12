/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

@class NSDictionary;


@protocol CRCommand <NSObject,NSCopying>
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long commandDirection; 
@required
-(NSDictionary *)userInfo;
-(void)setUserInfo:(id)arg1;
-(unsigned long long)commandDirection;
-(void)setCommandDirection:(unsigned long long)arg1;

@end

