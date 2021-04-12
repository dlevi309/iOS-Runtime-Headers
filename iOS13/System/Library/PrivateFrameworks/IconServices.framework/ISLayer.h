/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/


@protocol ISEffect, ISCompositorResource;
#import <IconServices/IconServices-Structs.h>
@class ISColor, NSString, NSMutableArray, NSArray;

@interface ISLayer : NSObject {

	ISColor* _backgroundColor;
	NSString* _name;
	id<ISEffect> _effect;
	id<ISCompositorResource> _content;
	ISLayer* _mask;
	ISLayer* _internalSuperlayer;
	NSMutableArray* _internalSublayers;
	CGRect _frame;

}

@property (assign,nonatomic,__weak) ISLayer * internalSuperlayer;               //@synthesize internalSuperlayer=_internalSuperlayer - In the implementation block
@property (nonatomic,readonly) NSMutableArray * internalSublayers;              //@synthesize internalSublayers=_internalSublayers - In the implementation block
@property (assign,nonatomic) CGRect frame;                                      //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) CGPoint position; 
@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) id<ISEffect> effect;                               //@synthesize effect=_effect - In the implementation block
@property (nonatomic,retain) ISColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) id<ISCompositorResource> content;                  //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) ISLayer * mask;                                    //@synthesize mask=_mask - In the implementation block
@property (nonatomic,readonly) ISLayer * superlayer; 
@property (nonatomic,copy,readonly) NSArray * sublayers; 
-(id)init;
-(id)debugDescription;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CGSize)size;
-(CGPoint)position;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(CGRect)frame;
-(ISLayer *)mask;
-(void)setMask:(ISLayer *)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(id<ISCompositorResource>)content;
-(ISColor *)backgroundColor;
-(void)setBackgroundColor:(ISColor *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)removeFromSuperlayer;
-(ISLayer *)superlayer;
-(void)addSublayer:(id)arg1 ;
-(void)setEffect:(id<ISEffect>)arg1 ;
-(id<ISEffect>)effect;
-(NSArray *)sublayers;
-(void)setContent:(id<ISCompositorResource>)arg1 ;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(ISLayer *)internalSuperlayer;
-(NSMutableArray *)internalSublayers;
-(void)setInternalSuperlayer:(ISLayer *)arg1 ;
@end

