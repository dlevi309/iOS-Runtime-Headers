/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSString, NSArray;


@protocol _IKJSImpression <IKJSImpression,JSExport>
@property (nonatomic,readonly) NSString * data; 
@property (nonatomic,readonly) NSArray * timestamps; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) id parent; 
@property (nonatomic,readonly) long long index; 
@property (nonatomic,readonly) NSString * impressionQueueTag; 
@required
-(id)parent;
-(NSString *)data;
-(long long)index;
-(NSArray *)timestamps;
-(NSArray *)children;
-(NSString *)impressionQueueTag;

@end

