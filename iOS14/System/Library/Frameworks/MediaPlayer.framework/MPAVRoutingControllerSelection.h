/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSArray;

@interface MPAVRoutingControllerSelection : NSObject {

	NSArray* _routes;
	long long _selectionOperation;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSArray * routes;                          //@synthesize routes=_routes - In the implementation block
@property (assign,nonatomic) long long selectionOperation;              //@synthesize selectionOperation=_selectionOperation - In the implementation block
@property (nonatomic,copy) id completion;                               //@synthesize completion=_completion - In the implementation block
-(NSArray *)routes;
-(void)setCompletion:(id)arg1 ;
-(long long)selectionOperation;
-(void)setSelectionOperation:(long long)arg1 ;
-(id)initWithRoutes:(id)arg1 selectionOperation:(long long)arg2 ;
-(void)setRoutes:(NSArray *)arg1 ;
-(id)completion;
-(id)description;
@end

