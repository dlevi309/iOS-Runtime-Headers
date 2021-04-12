/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <libobjc.A.dylib/TLKObservable.h>
#import <libobjc.A.dylib/TLKObserver.h>

@protocol TLKObserver;
@class NSString;

@interface TLKObject : NSObject <TLKObservable, TLKObserver> {

	id<TLKObserver> observer;
	long long batchUpdateCount;

}

@property (__weak) id<TLKObserver> observer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long batchUpdateCount; 
-(void)setObserver:(id<TLKObserver>)arg1 ;
-(id<TLKObserver>)observer;
-(long long)batchUpdateCount;
-(void)setBatchUpdateCount:(long long)arg1 ;
-(void)propertiesDidChange;
@end

