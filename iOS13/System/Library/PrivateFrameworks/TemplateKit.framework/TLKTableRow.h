/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)data;
-(void)setData:(NSArray *)arg1 ;
-(BOOL)isSubHeader;
-(void)setIsSubHeader:(BOOL)arg1 ;
@end

