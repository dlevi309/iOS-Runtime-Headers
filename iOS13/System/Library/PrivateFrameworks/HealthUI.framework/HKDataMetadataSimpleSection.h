/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(NSMutableArray *)rows;
-(void)setRows:(NSMutableArray *)arg1 ;
-(id)sectionTitle;
-(id)initWithTitle:(id)arg1 ;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)addText:(id)arg1 detail:(id)arg2 ;
-(id)_rowTitles;
-(id)_valueForRowWithTitle:(id)arg1 ;
@end

