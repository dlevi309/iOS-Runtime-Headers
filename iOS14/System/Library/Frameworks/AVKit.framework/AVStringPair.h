/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@class NSString;

@interface AVStringPair : NSObject {

	NSString* _first;
	NSString* _second;

}

@property (nonatomic,readonly) NSString * first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,readonly) NSString * second;              //@synthesize second=_second - In the implementation block
@property (nonatomic,readonly) NSString * key; 
@property (nonatomic,readonly) NSString * value; 
-(NSString *)second;
-(NSString *)first;
-(BOOL)keyEquals:(id)arg1 ;
-(id)initWithString:(id)arg1 separatedByString:(id)arg2 ;
-(NSString *)key;
-(NSString *)value;
@end

