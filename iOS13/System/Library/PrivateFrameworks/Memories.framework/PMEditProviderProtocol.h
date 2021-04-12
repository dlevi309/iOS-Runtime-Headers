/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

@class VEKProduction;


@protocol PMEditProviderProtocol <NSObject>
@property (nonatomic,retain) VEKProduction * production; 
@property (assign,nonatomic,__weak) id<PMEditProviderDelegate> delegate; 
@optional
-(void)updateWithResult:(id)arg1;

@required
-(id<PMEditProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(VEKProduction *)production;
-(void)setProduction:(id)arg1;
-(id)initWithProduction:(id)arg1;

@end

