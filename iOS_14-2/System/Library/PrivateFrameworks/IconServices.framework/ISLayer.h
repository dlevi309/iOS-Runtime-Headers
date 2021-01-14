/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEffect:(id<ISEffect>)arg1 ;
-(CGRect)bounds;
-(ISLayer *)mask;
-(CGPoint)position;
-(id<ISEffect>)effect;
-(void)removeFromSuperlayer;
-(void)addSublayer:(id)arg1 ;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(id<ISCompositorResource>)content;
-(id)init;
-(void)setContent:(id<ISCompositorResource>)arg1 ;
-(void)setMask:(ISLayer *)arg1 ;
-(NSArray *)sublayers;
-(CGSize)size;
-(NSMutableArray *)internalSublayers;
-(CGRect)frame;
-(id)debugDescription;
-(void)setSize:(CGSize)arg1 ;
-(void)setBackgroundColor:(ISColor *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(ISColor *)backgroundColor;
-(NSString *)name;
-(void)setFrame:(CGRect)arg1 ;
-(ISLayer *)internalSuperlayer;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setInternalSuperlayer:(ISLayer *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(ISLayer *)superlayer;
@end

