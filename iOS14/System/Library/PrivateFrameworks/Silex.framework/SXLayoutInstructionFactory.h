/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXLayoutInstructionFactory.h>

@protocol SXLayoutInstructionFactory <NSObject>
@required
-(id)createInstructions;

@end


@protocol SXPresentationAttributesProvider;
@class NSString;

@interface SXLayoutInstructionFactory : NSObject <SXLayoutInstructionFactory> {

	id<SXPresentationAttributesProvider> _presentationAttributesProvider;

}

@property (nonatomic,readonly) id<SXPresentationAttributesProvider> presentationAttributesProvider;              //@synthesize presentationAttributesProvider=_presentationAttributesProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPresentationAttributesProvider:(id)arg1 ;
-(id<SXPresentationAttributesProvider>)presentationAttributesProvider;
-(id)createInstructions;
@end

