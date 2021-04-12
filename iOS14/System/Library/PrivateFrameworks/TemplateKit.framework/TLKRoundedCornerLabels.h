/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray;

@interface TLKRoundedCornerLabels : TLKStackView {

	NSMutableArray* _roundedLabels;
	unsigned long long _prominence;
	unsigned long long _sizeConfiguration;

}

@property (nonatomic,retain) NSMutableArray * roundedLabels;                    //@synthesize roundedLabels=_roundedLabels - In the implementation block
@property (assign,nonatomic) unsigned long long prominence;                     //@synthesize prominence=_prominence - In the implementation block
@property (assign,nonatomic) unsigned long long sizeConfiguration;              //@synthesize sizeConfiguration=_sizeConfiguration - In the implementation block
-(void)setProminence:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)sizeConfiguration;
-(void)setSizeConfiguration:(unsigned long long)arg1 ;
-(void)setRoundedLabels:(NSMutableArray *)arg1 ;
-(NSMutableArray *)roundedLabels;
-(void)updateRoundedText:(id)arg1 ;
-(unsigned long long)prominence;
@end

