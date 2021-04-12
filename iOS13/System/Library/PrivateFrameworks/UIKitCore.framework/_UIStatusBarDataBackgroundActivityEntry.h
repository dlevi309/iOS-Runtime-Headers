/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_ui_descriptionBuilder;
-(NSString *)detailString;
-(double)displayStartDate;
-(void)setDetailString:(NSString *)arg1 ;
-(void)setDisplayStartDate:(double)arg1 ;
@end

