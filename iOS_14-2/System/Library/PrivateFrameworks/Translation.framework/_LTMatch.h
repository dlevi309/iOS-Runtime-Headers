/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


#import <Translation/Translation-Structs.h>
@class NSDictionary, NSString;

@interface _LTMatch : NSObject {

	NSDictionary* _node;
	NSString* _token;
	NSRange _range;

}

@property (nonatomic,retain) NSDictionary * node;              //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) NSRange range;                    //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSString * token;                 //@synthesize token=_token - In the implementation block
-(void)setRange:(NSRange)arg1 ;
-(NSRange)range;
-(NSDictionary *)node;
-(void)setNode:(NSDictionary *)arg1 ;
-(id)description;
-(void)setToken:(NSString *)arg1 ;
-(id)initWithNode:(id)arg1 range:(NSRange)arg2 ;
-(NSString *)token;
@end

