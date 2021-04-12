/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXHorizontalStackLayout.h>

@protocol SXHorizontalStackLayout <NSObject>
@required
-(double)widthForIdentifier:(id)arg1;
-(double)positionForIdentifier:(id)arg1;

@end


@class NSMutableDictionary, NSString;

@interface SXHorizontalStackLayout : NSObject <SXHorizontalStackLayout> {

	NSMutableDictionary* _widths;
	NSMutableDictionary* _positions;

}

@property (nonatomic,readonly) NSMutableDictionary * widths;                 //@synthesize widths=_widths - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * positions;              //@synthesize positions=_positions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(NSMutableDictionary *)widths;
-(void)setWidth:(double)arg1 forIdentifier:(id)arg2 ;
-(double)widthForIdentifier:(id)arg1 ;
-(void)setPosition:(double)arg1 forIdentifier:(id)arg2 ;
-(NSMutableDictionary *)positions;
-(double)positionForIdentifier:(id)arg1 ;
@end

