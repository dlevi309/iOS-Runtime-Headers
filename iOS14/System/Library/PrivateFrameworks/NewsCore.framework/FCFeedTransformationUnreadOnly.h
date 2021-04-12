/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class FCReadingHistory, NSString;

@interface FCFeedTransformationUnreadOnly : NSObject <FCFeedTransforming> {

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

