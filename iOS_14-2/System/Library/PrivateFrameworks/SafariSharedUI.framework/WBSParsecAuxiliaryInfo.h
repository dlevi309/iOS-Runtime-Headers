/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariShared/WBSParsecModel.h>

@class NSString;

@interface WBSParsecAuxiliaryInfo : WBSParsecModel {

	NSString* _topText;
	NSString* _middleText;
	NSString* _bottomText;
	NSString* _bottomTextColor;

}

@property (nonatomic,copy,readonly) NSString * topText;                      //@synthesize topText=_topText - In the implementation block
@property (nonatomic,copy,readonly) NSString * middleText;                   //@synthesize middleText=_middleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * bottomText;                   //@synthesize bottomText=_bottomText - In the implementation block
@property (nonatomic,copy,readonly) NSString * bottomTextColor;              //@synthesize bottomTextColor=_bottomTextColor - In the implementation block
+(id)schema;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)topText;
-(NSString *)middleText;
-(NSString *)bottomText;
-(NSString *)bottomTextColor;
@end

