/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol TUICandidateViewState <NSObject>
@property (nonatomic,readonly) id<TUICandidateViewStyle> style; 
@property (nonatomic,readonly) id<TUICandidateViewStyle> disambiguationStyle; 
@property (nonatomic,readonly) long long primaryGridRowType; 
@property (nonatomic,readonly) long long disambiguationGridRowType; 
@property (nonatomic,readonly) long long disambiguationGridPosition; 
@property (nonatomic,readonly) long long sortControlPosition; 
@property (nonatomic,readonly) long long inlineTextViewPosition; 
@property (nonatomic,readonly) long long arrowButtonPosition; 
@property (nonatomic,readonly) long long arrowButtonDirection; 
@property (nonatomic,readonly) BOOL hasBackdrop; 
@property (nonatomic,readonly) BOOL candidateNumberEnabled; 
@property (nonatomic,readonly) double yOffset; 
@property (nonatomic,readonly) double additionalHeight; 
@property (nonatomic,readonly) CGPoint arrowButtonOffset; 
@property (nonatomic,readonly) unsigned long long borders; 
@required
-(id<TUICandidateViewStyle>)style;
-(double)yOffset;
-(double)additionalHeight;
-(long long)arrowButtonDirection;
-(long long)arrowButtonPosition;
-(id<TUICandidateViewStyle>)disambiguationStyle;
-(long long)primaryGridRowType;
-(long long)disambiguationGridRowType;
-(long long)disambiguationGridPosition;
-(long long)sortControlPosition;
-(long long)inlineTextViewPosition;
-(BOOL)hasBackdrop;
-(BOOL)candidateNumberEnabled;
-(CGPoint)arrowButtonOffset;
-(unsigned long long)borders;

@end

