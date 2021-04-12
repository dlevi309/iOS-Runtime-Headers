/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)size;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSize:(double)arg1 ;
-(id)description;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
@end

