/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXLayoutBlueprintProvider.h>
@class SXLayoutBlueprint;


@protocol SXLayoutBlueprintProvider <NSObject>
@property (nonatomic,readonly) SXLayoutBlueprint * blueprint; 
@required
-(SXLayoutBlueprint *)blueprint;

@end


@class SXLayoutBlueprint, NSString;

@interface SXLayoutBlueprintProvider : NSObject <SXLayoutBlueprintProvider> {

	SXLayoutBlueprint* blueprint;

}

@property (nonatomic,retain) SXLayoutBlueprint * blueprint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXLayoutBlueprint *)blueprint;
-(void)updateBlueprint:(id)arg1 ;
-(void)setBlueprint:(SXLayoutBlueprint *)arg1 ;
@end

