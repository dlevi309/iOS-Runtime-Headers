/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/

#import <libobjc.A.dylib/ATMessageLink.h>
@class NSString;


@protocol ATMessageLink <NSObject>
@property (getter=isInitialized,nonatomic,readonly) BOOL initialized; 
@property (getter=isOpen,nonatomic,readonly) BOOL open; 
@property (nonatomic,readonly) int endpointType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@required
-(BOOL)isInitialized;
-(void)addObserver:(id)arg1;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(BOOL)isOpen;
-(int)endpointType;
-(void)removeObserver:(id)arg1;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2;
-(void)removeRequestHandlerForDataClass:(id)arg1;
-(void)sendResponse:(id)arg1 withProgress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;
-(NSString *)identifier;

@end


@class NSString;

@interface ATMessageLink : NSObject <ATMessageLink>

@property (getter=isInitialized,nonatomic,readonly) BOOL initialized; 
@property (getter=isOpen,nonatomic,readonly) BOOL open; 
@property (nonatomic,readonly) int endpointType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInitialized;
-(void)addObserver:(id)arg1 ;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init;
-(BOOL)isOpen;
-(int)endpointType;
-(void)removeObserver:(id)arg1 ;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 ;
-(void)removeRequestHandlerForDataClass:(id)arg1 ;
-(void)sendResponse:(id)arg1 withProgress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)identifier;
@end

