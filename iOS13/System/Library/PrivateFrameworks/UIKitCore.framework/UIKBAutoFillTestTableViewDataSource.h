/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary;

@interface UIKBAutoFillTestTableViewDataSource : NSObject <NSCoding> {

	NSMutableDictionary* _rowCountMap;
	NSMutableDictionary* _visibleCellDataMap;
	NSMutableDictionary* _headerDataMap;
	NSMutableDictionary* _footerDataMap;

}

@property (nonatomic,readonly) long long numberOfSections; 
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(id)cellForRowAtIndexPath:(id)arg1 ;
-(void)setNumberOfRows:(long long)arg1 forSection:(long long)arg2 ;
-(void)setCellData:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)setHeaderData:(id)arg1 forSection:(long long)arg2 ;
-(void)setFooterData:(id)arg1 forSection:(long long)arg2 ;
-(double)heightForRowAtIndexPath:(id)arg1 ;
-(id)titleForHeaderInSection:(long long)arg1 ;
-(id)titleForFooterInSection:(long long)arg1 ;
-(double)heightForHeaderInSection:(long long)arg1 ;
-(double)heightForFooterInSection:(long long)arg1 ;
-(id)viewForHeaderInSection:(long long)arg1 ;
-(id)viewForFooterInSection:(long long)arg1 ;
@end

