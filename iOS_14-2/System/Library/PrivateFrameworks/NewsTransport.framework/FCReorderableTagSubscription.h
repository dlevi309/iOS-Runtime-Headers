/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

@class NSNumber, NSString;


@protocol FCReorderableTagSubscription <NFCopying>
@property (nonatomic,copy,readonly) NSNumber * order; 
@property (nonatomic,copy,readonly) NSString * tagID; 
@required
-(NSString *)tagID;
-(id)copyWithOrder:(id)arg1;
-(NSNumber *)order;

@end

