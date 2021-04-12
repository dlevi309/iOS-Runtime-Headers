/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <libobjc.A.dylib/TLKObservable.h>
#import <libobjc.A.dylib/TLKObserver.h>

@protocol TLKObserver;
@class NSString;

@interface TLKObject : NSObject <TLKObservable, TLKObserver> {

	BOOL inBatchUpdate;
	id<TLKObserver> observer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<TLKObserver> observer; 
@property (assign) BOOL inBatchUpdate; 
-(id<TLKObserver>)observer;
-(void)setObserver:(id<TLKObserver>)arg1 ;
-(BOOL)inBatchUpdate;
-(void)propertiesDidChange;
-(void)setInBatchUpdate:(BOOL)arg1 ;
@end

