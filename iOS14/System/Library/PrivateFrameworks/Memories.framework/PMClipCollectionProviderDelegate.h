/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

