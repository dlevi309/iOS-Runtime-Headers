/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/


@class MTMaterialLayer, NSDate;

@interface MTPrunePromise : NSObject {

	MTMaterialLayer* _materialLayer;
	NSDate* _timeStamp;
	BOOL _promiseFulfilled;

}

@property (assign,getter=isPromiseFulfilled,nonatomic) BOOL promiseFulfilled;              //@synthesize promiseFulfilled=_promiseFulfilled - In the implementation block
-(id)initWithMaterialLayer:(id)arg1 ;
-(void)fulfillPromise;
-(double)timeIntervalSincePromise;
-(BOOL)isPromiseFulfilled;
-(void)setPromiseFulfilled:(BOOL)arg1 ;
-(void)dealloc;
@end

