/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSString;

@interface HKAxisLabel : NSObject {

	NSString* _text;
	id _location;
	long long _labelType;

}

@property (nonatomic,retain) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) id location;                      //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) long long labelType;              //@synthesize labelType=_labelType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)location;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(long long)labelType;
-(void)setLabelType:(long long)arg1 ;
-(void)setLocation:(id)arg1 ;
@end

