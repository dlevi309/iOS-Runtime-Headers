/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAssetURL:(NSURL *)arg1 ;
-(void)start;
-(id<WFCloudKitItem>)item;
-(NSURL *)assetURL;
-(void)setItem:(id<WFCloudKitItem>)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)initWithAssetURL:(id)arg1 item:(id)arg2 key:(id)arg3 ;
@end

