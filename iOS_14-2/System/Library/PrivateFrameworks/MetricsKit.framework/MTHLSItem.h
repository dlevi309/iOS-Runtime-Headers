/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <libobjc.A.dylib/MTMediaPlaylistItem.h>

@class NSArray, NSString;

@interface MTHLSItem : NSObject <MTMediaPlaylistItem> {

	unsigned long long _startOverallPosition;
	unsigned long long _startPosition;
	NSArray* _eventData;

}

@property (assign,nonatomic) unsigned long long startOverallPosition;              //@synthesize startOverallPosition=_startOverallPosition - In the implementation block
@property (assign,nonatomic) unsigned long long startPosition;                     //@synthesize startPosition=_startPosition - In the implementation block
@property (nonatomic,retain) NSArray * eventData;                                  //@synthesize eventData=_eventData - In the implementation block
@property (nonatomic,readonly) unsigned long long overallPosition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)comparator;
-(long long)compare:(id)arg1 ;
-(NSArray *)eventData;
-(unsigned long long)startPosition;
-(void)setStartPosition:(unsigned long long)arg1 ;
-(void)setEventData:(NSArray *)arg1 ;
-(unsigned long long)startOverallPosition;
-(id)initWithStartOverallPosition:(unsigned long long)arg1 metricsData:(id)arg2 ;
-(void)setStartOverallPosition:(unsigned long long)arg1 ;
@end

