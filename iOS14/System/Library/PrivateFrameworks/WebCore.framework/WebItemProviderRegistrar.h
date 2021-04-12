/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

@class NSString, NSData;


@protocol WebItemProviderRegistrar <NSObject>
@property (nonatomic,readonly) id<NSItemProviderWriting> representingObjectForClient; 
@property (nonatomic,readonly) NSString * typeIdentifierForClient; 
@property (nonatomic,readonly) NSData * dataForClient; 
@optional
-(NSData *)dataForClient;
-(id<NSItemProviderWriting>)representingObjectForClient;
-(NSString *)typeIdentifierForClient;

@required
-(void)registerItemProvider:(id)arg1;

@end

