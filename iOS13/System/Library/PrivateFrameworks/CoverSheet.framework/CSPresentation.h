/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <libobjc.A.dylib/CSPresentationProviding.h>
#import <UIKit/UICoordinateSpace.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UICoordinateSpace;
@class NSArray, NSMutableArray, NSString;

@interface CSPresentation : NSObject <CSPresentationProviding, UICoordinateSpace, NSCopying> {

	NSMutableArray* _regions;
	id<UICoordinateSpace> _coordinateSpace;
	NSString* _identifier;

}

@property (assign,nonatomic,__weak) id<UICoordinateSpace> coordinateSpace;                            //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,copy,readonly) NSArray * regions;                                                //@synthesize regions=_regions - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> presentationCoordinateSpace; 
@property (nonatomic,copy,readonly) NSArray * presentationRegions; 
@property (nonatomic,readonly) CGRect bounds; 
+(id)presentation;
+(id)presentationWithCoordinateSpace:(id)arg1 ;
+(id)presentationForProvider:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)reset;
-(CGRect)bounds;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id<UICoordinateSpace>)coordinateSpace;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(void)addRegion:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(void)setCoordinateSpace:(id<UICoordinateSpace>)arg1 ;
-(NSArray *)regions;
-(void)addRegions:(id)arg1 ;
-(id)regionsIntersectingCoordinateSpace:(id)arg1 ;
-(NSArray *)presentationRegions;
-(id<UICoordinateSpace>)presentationCoordinateSpace;
-(void)unionPresentation:(id)arg1 ;
-(id)firstRegionIntersectingCoordinateSpace:(id)arg1 excludingRegionsWithRole:(long long)arg2 ;
-(BOOL)intersectsCoordinateSpace:(id)arg1 ;
-(id)firstRegionIntersectingCoordinateSpace:(id)arg1 ;
-(id)presentationForRole:(long long)arg1 ;
-(UIEdgeInsets)suggestedInsetsForPreferredContentFrame:(CGRect)arg1 ;
@end

