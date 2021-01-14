/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSString;


@protocol SBHLibraryCategoryMapProviderSource <NSObject>
@property (assign,nonatomic,__weak) id<SBHLibraryCategoryMapProviderSourceDelegate> delegate; 
@property (nonatomic,readonly) NSString * sourceName; 
@required
-(id<SBHLibraryCategoryMapProviderSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)requestLibraryCategoryMapWithOptions:(unsigned long long)arg1 existingLibraryCategoryMap:(id)arg2 forbiddenApplicationIdentifiers:(id)arg3 sessionId:(unsigned long long)arg4 queue:(id)arg5 completion:(/*^block*/id)arg6;
-(NSString *)sourceName;

@end

