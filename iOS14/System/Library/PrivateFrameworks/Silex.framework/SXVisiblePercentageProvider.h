/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXVisiblePercentageProviding.h>
#import <libobjc.A.dylib/SXVisiblePercentageReporting.h>

@class NSString;

@interface SXVisiblePercentageProvider : NSObject <SXVisiblePercentageProviding, SXVisiblePercentageReporting> {

	double _visiblePercentage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double visiblePercentage;              //@synthesize visiblePercentage=_visiblePercentage - In the implementation block
-(double)visiblePercentageOfObject:(id)arg1 ;
-(double)visiblePercentage;
-(void)setVisiblePercentage:(double)arg1 ;
-(id)initWithVisiblePercentage:(double)arg1 ;
@end

