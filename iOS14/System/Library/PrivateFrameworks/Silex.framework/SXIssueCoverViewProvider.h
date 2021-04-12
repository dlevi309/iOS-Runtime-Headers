/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXIssueCoverViewProvider.h>

@protocol SXIssueCoverViewProvider <NSObject>
@required
-(id)viewForIssueCover:(id)arg1;
-(id)viewForIssueCover:(id)arg1;
-(void)presentIssueCover:(id)arg1 onView:(id)arg2 options:(id)arg3;
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

