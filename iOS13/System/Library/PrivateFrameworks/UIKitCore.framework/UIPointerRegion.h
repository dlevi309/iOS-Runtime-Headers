/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSObject;
@class UIView;

@interface UIPointerRegion : NSObject <NSCopying> {

	id<NSObject> _identifier;
	unsigned long long _generationID;
	UIView* _referenceView;
	CGRect _rect;

}

@property (assign,nonatomic) CGRect rect;                                  //@synthesize rect=_rect - In the implementation block
@property (nonatomic,retain) id<NSObject> identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long generationID;              //@synthesize generationID=_generationID - In the implementation block
@property (assign,nonatomic,__weak) UIView * referenceView;                //@synthesize referenceView=_referenceView - In the implementation block
+(id)regionWithRect:(CGRect)arg1 identifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSObject>)identifier;
-(void)setIdentifier:(id<NSObject>)arg1 ;
-(CGRect)rect;
-(UIView *)referenceView;
-(void)setReferenceView:(UIView *)arg1 ;
-(void)setRect:(CGRect)arg1 ;
-(unsigned long long)generationID;
-(void)setGenerationID:(unsigned long long)arg1 ;
@end

