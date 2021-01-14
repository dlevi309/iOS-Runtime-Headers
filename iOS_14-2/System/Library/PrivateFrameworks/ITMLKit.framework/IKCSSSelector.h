/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class NSString;

@interface IKCSSSelector : NSObject {

	long long _type;
	NSString* _name;
	NSRange _range;

}

@property (assign) long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
@property (assign,nonatomic) NSRange range;                         //@synthesize range=_range - In the implementation block
-(void)setRange:(NSRange)arg1 ;
-(NSRange)range;
-(void)setType:(long long)arg1 ;
-(NSString *)stringValue;
-(NSString *)name;
-(id)description;
-(long long)type;
-(void)setName:(NSString *)arg1 ;
@end

