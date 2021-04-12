/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXWebContentDataSourceProviding.h>

@protocol SXDOMObjectProviding, SXResourceDataSource;
@class NSString;

@interface SXWebContentDataSourceProvider : NSObject <SXWebContentDataSourceProviding> {

	id<SXDOMObjectProviding> _DOMObjectProvider;
	id<SXResourceDataSource> _resourceDataSource;

}

@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;               //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) id<SXResourceDataSource> resourceDataSource;              //@synthesize resourceDataSource=_resourceDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(id<SXResourceDataSource>)resourceDataSource;
-(id)dataSourcesForReferences:(id)arg1 ;
-(id)initWithDOMObjectProvider:(id)arg1 resourceDataSource:(id)arg2 ;
@end

