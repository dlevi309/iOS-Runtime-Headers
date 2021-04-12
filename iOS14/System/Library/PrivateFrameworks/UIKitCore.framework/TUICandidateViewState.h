/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)yOffset;
-(unsigned long long)borders;
-(BOOL)hasBackdrop;
-(CGPoint)arrowButtonOffset;
-(long long)disambiguationGridRowType;
-(long long)inlineTextViewPosition;
-(BOOL)candidateNumberEnabled;
-(double)additionalHeight;
-(long long)arrowButtonDirection;
-(long long)arrowButtonPosition;
-(id<TUICandidateViewStyle>)style;
-(id<TUICandidateViewStyle>)disambiguationStyle;
-(long long)sortControlPosition;
-(long long)disambiguationGridPosition;
-(long long)primaryGridRowType;

@end

