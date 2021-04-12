/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

@class NSArray;


@protocol TUPluggable
@property (retain,nonatomic) id<TUPluggableDelegate> pluggableDelegate; 
@property (assign,nonatomic) BOOL isBeingUsedAsPlugin; 
@property (readonly,nonatomic) long long pluginItemCount; 
@property (readonly,nonatomic) long long pluginVisibleItemCount; 
@property (readonly,nonatomic) NSArray * pluginItemIdentifiers; 
@required
-(id<TUPluggableDelegate>)pluggableDelegate;
-(void)setPluggableDelegate:(id)arg1;
-(BOOL)isBeingUsedAsPlugin;
-(void)setIsBeingUsedAsPlugin:(BOOL)arg1;
-(long long)pluginItemCount;
-(long long)pluginVisibleItemCount;
-(NSArray *)pluginItemIdentifiers;
-(void)initializeWithCompletion:(/*^block*/id)arg1;
-(void)relayoutWithCompletion:(/*^block*/id)arg1;

@end

