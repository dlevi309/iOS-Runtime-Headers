/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSMutableArray;

@interface TSKChangeEntry : NSObject {

	id mChangeSource;
	NSMutableArray* mChanges;

}

@property (nonatomic,readonly) id changeSource; 
@property (nonatomic,readonly) NSMutableArray * changes; 
-(void)dealloc;
-(NSMutableArray *)changes;
-(id)changeSource;
-(id)initWithChangeSource:(id)arg1 changes:(id)arg2 ;
@end

