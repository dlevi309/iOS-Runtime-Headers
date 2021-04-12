/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKObject.h>

@class NSString;

@interface TLKSelectableGridTuple : TLKObject {

	NSString* _title;
	NSString* _subtitle;
	double _size;

}

@property (assign,nonatomic) double size;                      //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
+(id)tupleWithTitle:(id)arg1 subtitle:(id)arg2 ;
+(id)tuplesForTitles:(id)arg1 subtitles:(id)arg2 ;
-(id)description;
-(double)size;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSize:(double)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
@end

