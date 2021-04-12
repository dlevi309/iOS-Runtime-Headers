/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@interface SCRCGestureFinger : NSObject {

	unsigned long long _identifier;
	CGPoint _location;
	double _pressure;

}
-(id)description;
-(long long)type;
-(unsigned long long)identifier;
-(CGPoint)location;
-(double)pressure;
-(id)initWithIdentifier:(unsigned long long)arg1 location:(CGPoint)arg2 pressure:(double)arg3 ;
@end

