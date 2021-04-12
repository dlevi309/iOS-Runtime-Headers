/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEditing:(BOOL)arg1;
-(void)setHighlighted:(BOOL)arg1;
-(long long)tritiumUpdateMode;
-(BOOL)shouldUseTemplateColors;
-(void)setShouldUseTemplateColors:(BOOL)arg1;

@required
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(void)setDisplayObserver:(id)arg1;
-(BOOL)canUseCurvedText;
-(void)setCanUseCurvedText:(BOOL)arg1;

@end

