/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
*/


#import <BrailleTranslation/BrailleTranslation-Structs.h>
@interface BRLTTokenRange : NSObject {

	long long _token;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) long long token;              //@synthesize token=_token - In the implementation block
-(long long)token;
-(NSRange)range;
-(void)setToken:(long long)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithRange:(NSRange)arg1 token:(long long)arg2 ;
@end

