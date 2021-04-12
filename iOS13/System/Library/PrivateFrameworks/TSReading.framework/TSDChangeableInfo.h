/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDChangeableInfo <TSDInfo>
@property (nonatomic,readonly) BOOL isUserModifiable; 
@property (nonatomic,readonly) Class editorClass; 
@optional
-(void)willChangeProperties:(id)arg1;
-(Class)editorClass;

@required
-(void)beginCollectingChanges;
-(id)endCollectingChanges;
-(void)willChangeProperty:(int)arg1;
-(BOOL)isUserModifiable;

@end

