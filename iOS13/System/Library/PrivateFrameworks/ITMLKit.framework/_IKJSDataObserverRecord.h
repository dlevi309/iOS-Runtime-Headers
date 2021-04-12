/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@protocol IKJSDataObserving;
#import <ITMLKit/ITMLKit-Structs.h>
@class NSString;

@interface _IKJSDataObserverRecord : NSObject {

	struct {
		BOOL hasDidChangePropertyPath;
	}  _observerFlags;
	id<IKJSDataObserving> _observer;
	NSString* _observerHash;
	NSString* _pathString;

}

@property (nonatomic,__weak,readonly) id<IKJSDataObserving> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSString * observerHash;                            //@synthesize observerHash=_observerHash - In the implementation block
@property (nonatomic,readonly) NSString * pathString;                              //@synthesize pathString=_pathString - In the implementation block
+(id)hashForObserver:(id)arg1 ;
-(id<IKJSDataObserving>)observer;
-(NSString *)pathString;
-(id)initWithObserver:(id)arg1 pathString:(id)arg2 ;
-(BOOL)isAffectedByPropertyPathWithString:(id)arg1 subpathString:(id*)arg2 ;
-(NSString *)observerHash;
@end

