/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXIssueCoverViewProvider.h>

@protocol SXIssueCoverViewProvider <NSObject>
@required
-(id)viewForIssueCover:(id)arg1;
-(void)presentIssueCover:(id)arg1 onView:(id)arg2 options:(id)arg3;

@end


@protocol SXIssueCoverLayoutAttributesFactory;
@class NSString;

@interface SXIssueCoverViewProvider : NSObject <SXIssueCoverViewProvider> {

	id<SXIssueCoverLayoutAttributesFactory> _layoutOptionsFactory;

}

@property (nonatomic,readonly) id<SXIssueCoverLayoutAttributesFactory> layoutOptionsFactory;              //@synthesize layoutOptionsFactory=_layoutOptionsFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXIssueCoverLayoutAttributesFactory>)layoutOptionsFactory;
-(id)initWithLayoutAttributesFactory:(id)arg1 ;
-(id)viewForIssueCover:(id)arg1 ;
-(void)presentIssueCover:(id)arg1 onView:(id)arg2 options:(id)arg3 ;
@end

