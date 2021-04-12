/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@interface SCRCGestureFinger : NSObject {

	unsigned long long _identifier;
	CGPoint _location;
	double _pressure;

}
-(CGPoint)location;
-(double)pressure;
-(id)description;
-(long long)type;
-(unsigned long long)identifier;
-(id)initWithIdentifier:(unsigned long long)arg1 location:(CGPoint)arg2 pressure:(double)arg3 ;
@end

