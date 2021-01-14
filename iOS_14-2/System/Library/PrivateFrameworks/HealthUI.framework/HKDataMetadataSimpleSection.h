/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKDataMetadataSection.h>
#import <libobjc.A.dylib/HKDataMetadataSectionDataReceiver.h>

@class NSString, NSMutableArray;

@interface HKDataMetadataSimpleSection : HKDataMetadataSection <HKDataMetadataSectionDataReceiver> {

	NSString* _title;
	NSMutableArray* _rows;

}

@property (nonatomic,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSMutableArray * rows;              //@synthesize rows=_rows - In the implementation block
-(id)initWithTitle:(id)arg1 ;
-(id)sectionTitle;
-(void)setRows:(NSMutableArray *)arg1 ;
-(NSMutableArray *)rows;
-(NSString *)title;
-(void)addText:(id)arg1 detail:(id)arg2 ;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(id)_rowTitles;
-(id)_valueForRowWithTitle:(id)arg1 ;
@end

