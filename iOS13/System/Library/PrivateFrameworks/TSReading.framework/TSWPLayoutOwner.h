/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSWPLayoutOwner <NSObject>
@optional
-(id)styleProvider;
-(BOOL)forceWesternLineBreaking;
-(BOOL)invalidateOnExactTextRangeLayout;
-(id)textColorOverride;
-(BOOL)shouldAllowFinishingPartionedAttachmentLayout;

@required
-(id)textWrapper;
-(BOOL)caresAboutStorageChanges;
-(void)layoutManagerNeedsLayout:(id)arg1;
-(void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
-(id)lineHintsForTarget:(id)arg1;

@end

