/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol PMClipCollectionProviderDelegate <NSObject>
@property (assign,nonatomic) BOOL shouldCancelDownload; 
@optional
-(void)clipCollectionProviderWillUpdateResults:(id)arg1;
-(void)clipCollectionProviderDidUpdateResults:(id)arg1 error:(id)arg2;

@required
-(void)setShouldCancelDownload:(BOOL)arg1;
-(BOOL)shouldCancelDownload;

@end

