/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXAutoPlacementLayout.h>

@protocol SXEdgeSpacing;
@class NSString;

@interface SXDebugAdLayout : NSObject <SXAutoPlacementLayout> {

	id<SXEdgeSpacing> _margin;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXEdgeSpacing> margin;              //@synthesize margin=_margin - In the implementation block
-(id<SXEdgeSpacing>)margin;
-(id)initWithMargin:(SXConvertibleValue)arg1 ;
@end

