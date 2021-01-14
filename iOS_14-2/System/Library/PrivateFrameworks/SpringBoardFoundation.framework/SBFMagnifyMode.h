/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBFMagnifyMode : NSObject <NSCopying, BSDescriptionProviding> {

	float _zoomFactor;
	NSString* _name;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                           //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) float zoomFactor;                      //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentMagnifyMode;
+(id)magnifyModeWithSize:(CGSize)arg1 name:(id)arg2 ;
-(id)succinctDescription;
-(id)init;
-(CGSize)size;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(float)zoomFactor;
-(NSString *)name;
-(NSString *)description;
-(void)setZoomFactor:(float)arg1 ;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

