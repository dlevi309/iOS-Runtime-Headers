/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class NSString, NSDate, NSDictionary;

@interface CFXPickerSession : NSObject {

	BOOL _isCompactPresentation;
	BOOL _didScroll;
	BOOL _didModifyEffectsStack;
	BOOL _didRemoveEffect;
	NSString* _pickerBundleIdentifier;
	double _compactPresentationDuration;
	double _expandedPresentationDuration;
	NSDate* _sessionStartTime;
	NSDate* _lastCompactPresentationTime;
	NSDate* _lastExpandedPresentationTime;
	double* _totalCompactPresentationDuration;
	double* _totalExpandedPresentationDuration;
	NSString* _typeOfRemovedEffect;

}

@property (nonatomic,readonly) NSDate * sessionStartTime;                            //@synthesize sessionStartTime=_sessionStartTime - In the implementation block
@property (assign,nonatomic) NSDate * lastCompactPresentationTime;                   //@synthesize lastCompactPresentationTime=_lastCompactPresentationTime - In the implementation block
@property (assign,nonatomic) NSDate * lastExpandedPresentationTime;                  //@synthesize lastExpandedPresentationTime=_lastExpandedPresentationTime - In the implementation block
@property (assign,nonatomic) double* totalCompactPresentationDuration;               //@synthesize totalCompactPresentationDuration=_totalCompactPresentationDuration - In the implementation block
@property (assign,nonatomic) double* totalExpandedPresentationDuration;              //@synthesize totalExpandedPresentationDuration=_totalExpandedPresentationDuration - In the implementation block
@property (assign,nonatomic) BOOL didModifyEffectsStack;                             //@synthesize didModifyEffectsStack=_didModifyEffectsStack - In the implementation block
@property (assign,nonatomic) BOOL didRemoveEffect;                                   //@synthesize didRemoveEffect=_didRemoveEffect - In the implementation block
@property (assign,nonatomic) NSString * typeOfRemovedEffect;                         //@synthesize typeOfRemovedEffect=_typeOfRemovedEffect - In the implementation block
@property (nonatomic,readonly) NSString * pickerBundleIdentifier;                    //@synthesize pickerBundleIdentifier=_pickerBundleIdentifier - In the implementation block
@property (nonatomic,readonly) double sessionDuration; 
@property (nonatomic,readonly) BOOL isCompactPresentation;                           //@synthesize isCompactPresentation=_isCompactPresentation - In the implementation block
@property (nonatomic,readonly) BOOL isExpandedPresentation; 
@property (nonatomic,readonly) double compactPresentationDuration;                   //@synthesize compactPresentationDuration=_compactPresentationDuration - In the implementation block
@property (nonatomic,readonly) double expandedPresentationDuration;                  //@synthesize expandedPresentationDuration=_expandedPresentationDuration - In the implementation block
@property (assign,nonatomic) BOOL didScroll;                                         //@synthesize didScroll=_didScroll - In the implementation block
@property (nonatomic,readonly) NSDictionary * effectChangesDict; 
-(void)didDismiss;
-(NSDate *)sessionStartTime;
-(void)setDidScroll:(BOOL)arg1 ;
-(double)sessionDuration;
-(BOOL)didScroll;
-(id)initWithIdentifier:(id)arg1 isCompact:(BOOL)arg2 ;
-(void)didChangePresentationMode;
-(void)didModifyEffectOfType:(id)arg1 wasRemoval:(BOOL)arg2 ;
-(NSString *)pickerBundleIdentifier;
-(BOOL)isCompactPresentation;
-(double)compactPresentationDuration;
-(double)expandedPresentationDuration;
-(NSDictionary *)effectChangesDict;
-(BOOL)didModifyEffectsStack;
-(BOOL)didRemoveEffect;
-(NSString *)typeOfRemovedEffect;
-(NSDate *)lastCompactPresentationTime;
-(void)setLastCompactPresentationTime:(NSDate *)arg1 ;
-(void)setLastExpandedPresentationTime:(NSDate *)arg1 ;
-(NSDate *)lastExpandedPresentationTime;
-(void)setDidModifyEffectsStack:(BOOL)arg1 ;
-(void)setDidRemoveEffect:(BOOL)arg1 ;
-(void)setTypeOfRemovedEffect:(NSString *)arg1 ;
-(BOOL)isExpandedPresentation;
-(double*)totalCompactPresentationDuration;
-(void)setTotalCompactPresentationDuration:(double*)arg1 ;
-(double*)totalExpandedPresentationDuration;
-(void)setTotalExpandedPresentationDuration:(double*)arg1 ;
@end

