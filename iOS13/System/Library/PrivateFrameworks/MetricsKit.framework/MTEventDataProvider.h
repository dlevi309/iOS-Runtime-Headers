/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTObject.h>

@protocol MTEventDataProviderDelegate;
@class NSDictionary;

@interface MTEventDataProvider : MTObject {

	id<MTEventDataProviderDelegate> _delegate;
	NSDictionary* _knownFieldMethods;

}

@property (nonatomic,retain) NSDictionary * knownFieldMethods;                             //@synthesize knownFieldMethods=_knownFieldMethods - In the implementation block
@property (assign,nonatomic,__weak) id<MTEventDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MTEventDataProviderDelegate>)delegate;
-(void)setDelegate:(id<MTEventDataProviderDelegate>)arg1 ;
-(id)knownFields;
-(id)processMetricsData:(id)arg1 performanceData:(id)arg2 ;
-(id)knownFieldMethodsForKnownFields:(id)arg1 ;
-(SEL)knownFieldAccessorForFieldName:(id)arg1 ;
-(NSDictionary *)knownFieldMethods;
-(void)setKnownFieldMethods:(NSDictionary *)arg1 ;
@end

