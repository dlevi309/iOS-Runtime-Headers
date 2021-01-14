/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKObject.h>

@class NSArray;

@interface TLKTableRow : TLKObject {

	BOOL _isSubHeader;
	NSArray* _data;

}

@property (nonatomic,retain) NSArray * data;                //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL isSubHeader;              //@synthesize isSubHeader=_isSubHeader - In the implementation block
-(void)setIsSubHeader:(BOOL)arg1 ;
-(BOOL)isSubHeader;
-(void)setData:(NSArray *)arg1 ;
-(NSArray *)data;
@end

