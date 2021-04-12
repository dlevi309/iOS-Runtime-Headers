/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

