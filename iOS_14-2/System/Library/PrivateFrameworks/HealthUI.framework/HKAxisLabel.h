/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)location;
-(void)setText:(NSString *)arg1 ;
-(void)setLocation:(id)arg1 ;
-(id)description;
-(void)setLabelType:(long long)arg1 ;
-(NSString *)text;
-(unsigned long long)hash;
-(long long)labelType;
-(BOOL)isEqual:(id)arg1 ;
@end

