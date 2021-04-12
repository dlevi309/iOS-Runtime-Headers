/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class NSArray;

@interface SXGradient : NSObject {

	NSArray* _colors;
	NSArray* _locations;
	CGPoint _startPoint;
	CGPoint _endPoint;

}

@property (nonatomic,readonly) CGPoint startPoint;               //@synthesize startPoint=_startPoint - In the implementation block
@property (nonatomic,readonly) CGPoint endPoint;                 //@synthesize endPoint=_endPoint - In the implementation block
@property (nonatomic,readonly) NSArray * colors;                 //@synthesize colors=_colors - In the implementation block
@property (nonatomic,readonly) NSArray * locations;              //@synthesize locations=_locations - In the implementation block
-(CGPoint)startPoint;
-(NSArray *)colors;
-(NSArray *)locations;
-(CGPoint)endPoint;
-(id)initWithStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 colors:(id)arg3 locations:(id)arg4 ;
@end

