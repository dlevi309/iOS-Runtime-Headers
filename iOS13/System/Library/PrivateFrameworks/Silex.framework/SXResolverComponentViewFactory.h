/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentViewFactory.h>

@protocol NFResolver;
@class NSString;

@interface SXResolverComponentViewFactory : NSObject <SXComponentViewFactory> {

	id<NFResolver> _resolver;

}

@property (nonatomic,readonly) id<NFResolver> resolver;              //@synthesize resolver=_resolver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
-(NSString *)type;
-(int)role;
-(id<NFResolver>)resolver;
-(id)initWithResolver:(id)arg1 ;
-(id)componentViewForComponent:(id)arg1 ;
-(Class)componentViewClass;
@end

