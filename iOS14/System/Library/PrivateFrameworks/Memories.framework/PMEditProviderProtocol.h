/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

