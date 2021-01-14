/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/HUGridDisplayOptions.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HUGridCellBackgroundDisplayOptions : NSObject <HUGridDisplayOptions, NSCopying> {

	unsigned long long _contentColorStyle;
	NSString* _contentSizeCategory;
	unsigned long long _displayStyle;

}

@property (assign,nonatomic) unsigned long long displayStyle;                   //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,readonly) double gutter; 
@property (assign,nonatomic) unsigned long long contentColorStyle;              //@synthesize contentColorStyle=_contentColorStyle - In the implementation block
@property (assign,nonatomic) NSString * contentSizeCategory;                    //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultOptions;
-(double)gutter;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(void)setDisplayStyle:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)displayStyle;
-(unsigned long long)contentColorStyle;
-(void)setContentColorStyle:(unsigned long long)arg1 ;
@end

