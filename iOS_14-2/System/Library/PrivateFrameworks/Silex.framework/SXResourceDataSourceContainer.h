/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) id<SXResourceDataSource> resourceDataSource;              //@synthesize resourceDataSource=_resourceDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerResourceDataSource:(id)arg1 ;
-(id<SXResourceDataSource>)resourceDataSource;
@end

