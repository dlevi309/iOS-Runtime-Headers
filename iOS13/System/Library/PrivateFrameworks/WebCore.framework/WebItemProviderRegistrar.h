/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

@class NSString, NSData;


@protocol WebItemProviderRegistrar <NSObject>
@property (nonatomic,readonly) id<NSItemProviderWriting> representingObjectForClient; 
@property (nonatomic,readonly) NSString * typeIdentifierForClient; 
@property (nonatomic,readonly) NSData * dataForClient; 
@optional
-(id<NSItemProviderWriting>)representingObjectForClient;
-(NSString *)typeIdentifierForClient;
-(NSData *)dataForClient;

@required
-(void)registerItemProvider:(id)arg1;

@end

