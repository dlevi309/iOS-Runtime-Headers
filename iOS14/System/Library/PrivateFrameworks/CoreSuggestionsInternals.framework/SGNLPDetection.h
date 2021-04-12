/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSString;

@interface SGNLPDetection : NSObject {

	NSString* _string;
	unsigned long long _category;
	NSRange _range;

}

@property (nonatomic,retain) NSString * string;                        //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) unsigned long long category;              //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) NSRange range;                            //@synthesize range=_range - In the implementation block
-(void)setRange:(NSRange)arg1 ;
-(void)setCategory:(unsigned long long)arg1 ;
-(NSRange)range;
-(unsigned long long)category;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
@end

