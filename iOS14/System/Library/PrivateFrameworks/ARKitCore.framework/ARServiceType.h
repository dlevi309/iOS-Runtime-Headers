/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

@class NSString;


@protocol ARServiceType <ARNamedService>
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (nonatomic,readonly) NSString * clientBundleIdentifier; 
@property (nonatomic,readonly) int clientProcessIdentifier; 
@property (nonatomic,readonly) NSString * clientProcessName; 
@property (assign,nonatomic,__weak) id<ARDaemonServiceDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<ARDaemonServiceDelegate> delegate; 
@required
+(BOOL)isSupported;
+(BOOL)isUnique;
-(NSString *)clientBundleIdentifier;
-(void)suspend;
-(void)setActive:(BOOL)arg1;
-(id<ARDaemonServiceDelegate>)delegate;
-(NSString *)clientProcessName;
-(BOOL)isActive;
-(id<ARDaemonServiceDataSource>)dataSource;
-(int)clientProcessIdentifier;
-(void)setDelegate:(id)arg1;
-(void)setDataSource:(id)arg1;
-(void)invalidate;
-(void)resume;

@end

