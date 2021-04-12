/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKComplicationDisplay <NSObject>
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
@optional
-(void)setMaxSize:(CGSize)arg1;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1;
-(void)setEditing:(BOOL)arg1;
-(BOOL)shouldUseTemplateColors;
-(void)setShouldUseTemplateColors:(BOOL)arg1;

@required
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(void)setDisplayObserver:(id)arg1;
-(BOOL)canUseCurvedText;
-(void)setCanUseCurvedText:(BOOL)arg1;

@end

