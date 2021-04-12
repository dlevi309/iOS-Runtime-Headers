/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSString, NSDictionary;

@interface IKPlayerTimeBoundaryDidCrossEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	double _boundary;

}

@property (nonatomic,readonly) double boundary;                        //@synthesize boundary=_boundary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(NSDictionary *)properties;
-(id)initWithBoundary:(double)arg1 ;
-(double)boundary;
@end

