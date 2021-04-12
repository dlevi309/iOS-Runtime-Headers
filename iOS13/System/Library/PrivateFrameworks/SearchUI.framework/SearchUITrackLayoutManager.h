/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(TLKGridLayoutManager *)layoutManager;
-(void)setLayoutManager:(TLKGridLayoutManager *)arg1 ;
-(id)initWithTrackCardSection:(id)arg1 ;
-(void)setTableMapping:(NSMapTable *)arg1 ;
-(NSMapTable *)tableMapping;
-(id)tableRowForTrack:(id)arg1 ;
@end

