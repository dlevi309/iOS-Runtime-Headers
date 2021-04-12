/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDPrototypeChange <NSObject>
@property (readonly) BOOL prototypeIsBeingReplaced; 
@property (readonly) BOOL prototypeIsBeingModified; 
@property (readonly) BOOL prototypeIsBeingDeleted; 
@property (retain,readonly) id prototype; 
@property (retain,readonly) id replacement; 
@property (retain,readonly) id<TSSPropertySource> propertiesBeforeChange; 
@property (retain,readonly) id<TSSPropertySource> propertiesAfterChange; 
@required
-(id)replacement;
-(id)prototype;
-(BOOL)prototypeIsBeingReplaced;
-(BOOL)prototypeIsBeingDeleted;
-(BOOL)propertyIsChanging:(int)arg1;
-(BOOL)propertiesAreChanging:(id)arg1;
-(BOOL)prototypeIsBeingModified;
-(id<TSSPropertySource>)propertiesBeforeChange;
-(id<TSSPropertySource>)propertiesAfterChange;

@end

