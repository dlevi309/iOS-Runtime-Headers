/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

@class NSArray;


@protocol VUIHomeShareMediaLibraryManager <NSObject>
@property (assign,nonatomic,__weak) id<VUIHomeShareMediaLibraryManagerDelegate> delegate; 
@property (nonatomic,copy,readonly) NSArray * homeShareMediaLibraries; 
@required
-(id<VUIHomeShareMediaLibraryManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)initWithManager:(id)arg1;
-(void)beginDiscoveringMediaLibraries;
-(void)endDiscoveringMediaLibraries;
-(NSArray *)homeShareMediaLibraries;

@end

