/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

@class NSArray;


@protocol WFDetailsProviderContext <WFProviderContext>
@property (nonatomic,readonly) NSArray * recommendations; 
@property (assign) BOOL diagnosable; 
@property (assign,nonatomic) BOOL autoJoinEnabled; 
@property (assign,nonatomic) BOOL autoLoginEnabled; 
@property (assign,nonatomic) BOOL isInSaveDataMode; 
@property (getter=isCurrent,nonatomic,readonly) BOOL current; 
@property (getter=isKnownNetwork,nonatomic,readonly) BOOL knownNetwork; 
@required
-(BOOL)isCurrent;
-(void)join;
-(void)manage;
-(void)setAutoJoinEnabled:(BOOL)arg1;
-(void)setAutoLoginEnabled:(BOOL)arg1;
-(BOOL)isInSaveDataMode;
-(void)setIsInSaveDataMode:(BOOL)arg1;
-(void)setDiagnosable:(BOOL)arg1;
-(void)renewLease;
-(NSArray *)recommendations;
-(BOOL)isKnownNetwork;
-(void)forget;
-(void)openRecommendationLink;
-(id)diagnosticsContext;
-(BOOL)diagnosable;
-(BOOL)autoJoinEnabled;
-(BOOL)autoLoginEnabled;

@end

