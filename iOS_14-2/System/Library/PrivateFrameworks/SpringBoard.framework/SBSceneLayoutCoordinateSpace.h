/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <UIKit/UICoordinateSpace.h>

@protocol UICoordinateSpace;
@class NSString;

@interface SBSceneLayoutCoordinateSpace : NSObject <BSDescriptionProviding, UICoordinateSpace> {

	id<UICoordinateSpace> _parentCoordinateSpace;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect bounds; 
+(id)coordinateSpaceForInterfaceOrientation:(long long)arg1 withReferenceCoordinateSpace:(id)arg2 inOrientation:(long long)arg3 ;
+(id)coordinateSpaceForFrame:(CGRect)arg1 withinCoordinateSpace:(id)arg2 ;
-(CGRect)bounds;
-(id)succinctDescription;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)initWithParentCoordinateSpace:(id)arg1 ;
@end

