/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSNumber, NSString;


@protocol FCReorderableTagSubscription <NFCopying>
@property (nonatomic,copy,readonly) NSNumber * order; 
@property (nonatomic,copy,readonly) NSString * tagID; 
@required
-(NSNumber *)order;
-(NSString *)tagID;
-(id)copyWithOrder:(id)arg1;

@end

