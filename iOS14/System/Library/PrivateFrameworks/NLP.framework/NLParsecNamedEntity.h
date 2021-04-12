/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
*/

@class NSString;


@protocol NLParsecNamedEntity <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned char category; 
@property (nonatomic,readonly) float score; 
@required
-(float)score;
-(unsigned char)category;
-(NSString *)name;

@end

