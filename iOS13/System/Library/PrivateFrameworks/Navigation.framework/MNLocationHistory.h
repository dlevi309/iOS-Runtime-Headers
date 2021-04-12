/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNLocationHistoryProvider;
@class NSArray;

@interface MNLocationHistory : NSObject {

	id<MNLocationHistoryProvider> _locationHistoryProvider;

}

@property (nonatomic,retain) id<MNLocationHistoryProvider> locationHistoryProvider;              //@synthesize locationHistoryProvider=_locationHistoryProvider - In the implementation block
@property (readonly) NSArray * locationHistory; 
-(id)init;
-(NSArray *)locationHistory;
-(id<MNLocationHistoryProvider>)locationHistoryProvider;
-(void)setLocationHistoryProvider:(id<MNLocationHistoryProvider>)arg1 ;
@end

