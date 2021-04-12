/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

@class NSArray;


@protocol VUIHomeShareMediaLibraryManager <NSObject>
@property (assign,nonatomic,__weak) id<VUIHomeShareMediaLibraryManagerDelegate> delegate; 
@property (nonatomic,copy,readonly) NSArray * homeShareMediaLibraries; 
@required
-(id)initWithManager:(id)arg1;
-(id<VUIHomeShareMediaLibraryManagerDelegate>)delegate;
-(void)beginDiscoveringMediaLibraries;
-(void)endDiscoveringMediaLibraries;
-(void)setDelegate:(id)arg1;
-(NSArray *)homeShareMediaLibraries;

@end

