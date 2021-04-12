/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class FCReadingHistory, NSString;

@interface FCFeedTransformationUnreadFirst : NSObject <FCFeedTransforming> {

	FCReadingHistory* _history;

}

@property (nonatomic,retain) FCReadingHistory * history;              //@synthesize history=_history - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithReadingHistory:(id)arg1 ;
-(FCReadingHistory *)history;
-(void)setHistory:(FCReadingHistory *)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
@end

