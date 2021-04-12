/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

@class NSArray;


@protocol CHStrokeProvider <NSObject>
@property (retain,readonly) id<CHStrokeProviderVersion> strokeProviderVersion; 
@property (copy,readonly) NSArray * orderedStrokes; 
@optional
-(BOOL)isStroke:(id)arg1 versionOfStrokeWithIdentifier:(id)arg2;
-(long long)compareOrderOfStroke:(id)arg1 toStroke:(id)arg2;

@required
-(id)strokeForIdentifier:(id)arg1;
-(id<CHStrokeProviderVersion>)strokeProviderVersion;
-(NSArray *)orderedStrokes;
-(long long)compareOrderOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;

@end

