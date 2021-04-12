/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <libobjc.A.dylib/NURenderResult.h>

@protocol NURenderStatistics;
@class NSString;

@interface _NURenderResult : NSObject <NURenderResult> {

	id<NURenderStatistics> _statistics;

}

@property (retain) id<NURenderStatistics> statistics;               //@synthesize statistics=_statistics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NURenderStatistics>)statistics;
-(void)setStatistics:(id<NURenderStatistics>)arg1 ;
@end

