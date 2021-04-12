/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UISApplicationSupportDisplayEdgeInsetsWrapper : NSObject <BSXPCCoding, NSCopying> {

	double _topInset;
	double _leftInset;
	double _bottomInset;
	double _rightInset;

}

@property (assign,nonatomic) double topInset;                       //@synthesize topInset=_topInset - In the implementation block
@property (assign,nonatomic) double leftInset;                      //@synthesize leftInset=_leftInset - In the implementation block
@property (assign,nonatomic) double bottomInset;                    //@synthesize bottomInset=_bottomInset - In the implementation block
@property (assign,nonatomic) double rightInset;                     //@synthesize rightInset=_rightInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)topInset;
-(id)initWithTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4 ;
-(void)setTopInset:(double)arg1 ;
-(double)leftInset;
-(NSString *)description;
-(double)bottomInset;
-(id)initWithXPCDictionary:(id)arg1 ;
-(double)rightInset;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setLeftInset:(double)arg1 ;
-(void)setBottomInset:(double)arg1 ;
-(void)setRightInset:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

