/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataEntry.h>

@class NSString;

@interface _UIStatusBarDataBackgroundActivityEntry : _UIStatusBarDataEntry {

	long long _type;
	double _displayStartDate;
	NSString* _detailString;

}

@property (assign,nonatomic) long long type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double displayStartDate;              //@synthesize displayStartDate=_displayStartDate - In the implementation block
@property (nonatomic,copy) NSString * detailString;                //@synthesize detailString=_detailString - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_ui_descriptionBuilder;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSString *)detailString;
-(void)setDetailString:(NSString *)arg1 ;
-(double)displayStartDate;
-(void)setDisplayStartDate:(double)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

