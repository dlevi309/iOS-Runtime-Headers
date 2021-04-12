/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
*/


@protocol VGOEMApplicationFinding <NSObject>
@property (assign,nonatomic,__weak) id<VGOEMApplicationFinderUpdates> delegate; 
@required
-(id<VGOEMApplicationFinderUpdates>)delegate;
-(void)findOEMApplications;
-(void)setDelegate:(id)arg1;

@end

