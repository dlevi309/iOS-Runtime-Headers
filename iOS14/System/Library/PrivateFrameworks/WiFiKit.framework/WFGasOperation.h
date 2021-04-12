/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WFOperation.h>

@protocol WFWiFiGasProxy;
@class NSSet;

@interface WFGasOperation : WFOperation {

	NSSet* _results;
	id<WFWiFiGasProxy> _gasProxy;
	NSSet* _networks;
	unsigned long long _elements;

}

@property (nonatomic,retain) id<WFWiFiGasProxy> gasProxy;              //@synthesize gasProxy=_gasProxy - In the implementation block
@property (nonatomic,retain) NSSet * networks;                         //@synthesize networks=_networks - In the implementation block
@property (retain) NSSet * results;                                    //@synthesize results=_results - In the implementation block
@property (assign) unsigned long long elements;                        //@synthesize elements=_elements - In the implementation block
-(void)setResults:(NSSet *)arg1 ;
-(NSSet *)networks;
-(void)setElements:(unsigned long long)arg1 ;
-(unsigned long long)elements;
-(NSSet *)results;
-(void)setNetworks:(NSSet *)arg1 ;
-(void)start;
-(id)initWithGasProxy:(id)arg1 networks:(id)arg2 elements:(unsigned long long)arg3 ;
-(void)_processGasResults:(id)arg1 error:(int)arg2 ;
-(id<WFWiFiGasProxy>)gasProxy;
-(void)setGasProxy:(id<WFWiFiGasProxy>)arg1 ;
@end

