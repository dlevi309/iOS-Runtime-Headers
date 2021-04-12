/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)generationID;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setReferenceView:(UIView *)arg1 ;
-(UIView *)referenceView;
-(void)setIdentifier:(id<NSObject>)arg1 ;
-(id<NSObject>)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setGenerationID:(unsigned long long)arg1 ;
@end

