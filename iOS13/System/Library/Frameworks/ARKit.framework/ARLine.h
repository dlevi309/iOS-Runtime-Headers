/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ARLine : NSObject <NSCopying> {

	unsigned long long _identifier;
	 _startPoint;
	 _endPoint;

}

@property (assign,nonatomic) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic)  startPoint;                                //@synthesize startPoint=_startPoint - In the implementation block
@property (assign,nonatomic)  endPoint;                                  //@synthesize endPoint=_endPoint - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)setStartPoint:;
-(void)setEndPoint:;
-()startPoint;
-()endPoint;
@end

