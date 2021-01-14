/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class NSString;


@protocol MPCItemIdentifier <NSObject>
@property (nonatomic,copy) NSString * contentItemID; 
@property (assign,nonatomic) long long repeatIndex; 
@required
-(void)setContentItemID:(id)arg1;
-(long long)repeatIndex;
-(void)setRepeatIndex:(long long)arg1;
-(NSString *)contentItemID;

@end

