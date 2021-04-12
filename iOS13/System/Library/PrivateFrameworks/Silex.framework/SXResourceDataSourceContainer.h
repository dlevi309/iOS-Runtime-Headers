/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXResourceDataSourceContainer.h>

@protocol SXResourceDataSourceContainer <SXResourceDataSourceProvider>
@required
-(void)registerResourceDataSource:(id)arg1;

@end


@protocol SXResourceDataSource;
@class NSString;

@interface SXResourceDataSourceContainer : NSObject <SXResourceDataSourceContainer> {

	id<SXResourceDataSource> _resourceDataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXResourceDataSource> resourceDataSource;              //@synthesize resourceDataSource=_resourceDataSource - In the implementation block
-(id<SXResourceDataSource>)resourceDataSource;
-(void)registerResourceDataSource:(id)arg1 ;
@end

