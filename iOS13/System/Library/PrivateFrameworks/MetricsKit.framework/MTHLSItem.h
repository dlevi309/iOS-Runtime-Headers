/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <libobjc.A.dylib/MTMediaPlaylistItem.h>

@class NSArray, NSString;

@interface MTHLSItem : NSObject <MTMediaPlaylistItem> {

	unsigned long long _startOverallPosition;
	long long _startPosition;
	NSArray* _eventData;

}

@property (assign,nonatomic) unsigned long long startOverallPosition;              //@synthesize startOverallPosition=_startOverallPosition - In the implementation block
@property (assign,nonatomic) long long startPosition;                              //@synthesize startPosition=_startPosition - In the implementation block
@property (nonatomic,retain) NSArray * eventData;                                  //@synthesize eventData=_eventData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long overallPosition; 
+(/*^block*/id)comparator;
-(long long)compare:(id)arg1 ;
-(long long)startPosition;
-(void)setStartPosition:(long long)arg1 ;
-(NSArray *)eventData;
-(void)setEventData:(NSArray *)arg1 ;
-(unsigned long long)startOverallPosition;
-(id)initWithStartOverallPosition:(unsigned long long)arg1 metricsData:(id)arg2 ;
-(void)setStartOverallPosition:(unsigned long long)arg1 ;
@end

