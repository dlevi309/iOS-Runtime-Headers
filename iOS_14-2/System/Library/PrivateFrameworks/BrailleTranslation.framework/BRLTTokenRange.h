/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
*/


#import <BrailleTranslation/BrailleTranslation-Structs.h>
@interface BRLTTokenRange : NSObject {

	long long _token;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) long long token;              //@synthesize token=_token - In the implementation block
-(void)setRange:(NSRange)arg1 ;
-(NSRange)range;
-(void)setToken:(long long)arg1 ;
-(long long)token;
-(id)initWithRange:(NSRange)arg1 token:(long long)arg2 ;
@end

