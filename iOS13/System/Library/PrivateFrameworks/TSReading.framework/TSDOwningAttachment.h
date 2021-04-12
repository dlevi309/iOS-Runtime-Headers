/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDOwningAttachment <NSObject>
@property (nonatomic,readonly) BOOL isDrawable; 
@property (nonatomic,readonly) BOOL isAnchored; 
@property (nonatomic,readonly) BOOL isPartitioned; 
@property (nonatomic,readonly) BOOL isAttachedToBodyText; 
@property (nonatomic,readonly) Class positionerClass; 
@property (nonatomic,readonly) BOOL isSearchable; 
@property (nonatomic,readonly) BOOL specifiesEnabledKnobMask; 
@property (nonatomic,readonly) unsigned long long enabledKnobMask; 
@required
-(BOOL)isDrawable;
-(BOOL)isAnchored;
-(BOOL)isSearchable;
-(BOOL)isAttachedToBodyText;
-(unsigned long long)enabledKnobMask;
-(BOOL)specifiesEnabledKnobMask;
-(BOOL)isPartitioned;
-(Class)positionerClass;
-(void)infoChanged;

@end

