/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/


@class NSString, NSRegularExpression;

@interface MCLURLRequestRewriteRule : NSObject {

	/*^block*/id _block;
	float _priority;
	NSString* _name;
	NSRegularExpression* _matchPattern;

}

@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) float priority;                                    //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * matchPattern;              //@synthesize matchPattern=_matchPattern - In the implementation block
+(id)urlRequestRewriteRuleWithMatchPattern:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(float)priority;
-(void)setPriority:(float)arg1 ;
-(id)initWithMatchExpression:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)rewriteURLRequest:(id)arg1 ;
-(NSRegularExpression *)matchPattern;
@end

