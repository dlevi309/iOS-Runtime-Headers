/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFCloudKitAsyncOperation.h>

@protocol WFCloudKitItem;
@class NSURL, NSString;

@interface WFCloudKitWebServiceAssetDownloadOperation : WFCloudKitAsyncOperation {

	NSURL* _assetURL;
	id<WFCloudKitItem> _item;
	NSString* _key;

}

@property (nonatomic,retain) NSURL * assetURL;                            //@synthesize assetURL=_assetURL - In the implementation block
@property (assign,nonatomic,__weak) id<WFCloudKitItem> item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSString * key;                              //@synthesize key=_key - In the implementation block
-(NSString *)key;
-(id<WFCloudKitItem>)item;
-(void)setItem:(id<WFCloudKitItem>)arg1 ;
-(void)start;
-(void)setKey:(NSString *)arg1 ;
-(NSURL *)assetURL;
-(void)setAssetURL:(NSURL *)arg1 ;
-(id)initWithAssetURL:(id)arg1 item:(id)arg2 key:(id)arg3 ;
@end

