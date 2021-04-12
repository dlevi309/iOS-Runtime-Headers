/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setBlueprint:(SXLayoutBlueprint *)arg1 ;
-(SXLayoutBlueprint *)blueprint;
-(void)updateBlueprint:(id)arg1 ;
@end

