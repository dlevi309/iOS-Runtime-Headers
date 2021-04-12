/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@class TLKGridLayoutManager, NSMapTable;

@interface SearchUITrackLayoutManager : NSObject {

	TLKGridLayoutManager* _layoutManager;
	NSMapTable* _tableMapping;

}

@property (nonatomic,retain) TLKGridLayoutManager * layoutManager;              //@synthesize layoutManager=_layoutManager - In the implementation block
@property (nonatomic,retain) NSMapTable * tableMapping;                         //@synthesize tableMapping=_tableMapping - In the implementation block
+(id)singleLineTextWithString:(id)arg1 highlighted:(BOOL)arg2 ;
-(void)setLayoutManager:(TLKGridLayoutManager *)arg1 ;
-(TLKGridLayoutManager *)layoutManager;
-(void)setTableMapping:(NSMapTable *)arg1 ;
-(id)tableRowForTrack:(id)arg1 ;
-(id)initWithTrackCardSection:(id)arg1 ;
-(NSMapTable *)tableMapping;
@end

