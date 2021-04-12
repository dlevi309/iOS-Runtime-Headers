/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@class NSPointerArray;

@interface AKInkAnnotationDrawingImageCache : NSObject {

	NSPointerArray* _pointerArray;

}

@property (nonatomic,retain) NSPointerArray * pointerArray;              //@synthesize pointerArray=_pointerArray - In the implementation block
+(id)sharedCache;
+(void)purgeSharedCache;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)_makeKeyMostRecentlyUsed:(id)arg1 ;
-(long long)_indexOfPointer:(void*)arg1 ;
-(void)_removeEntryAtIndex:(unsigned long long)arg1 ;
-(void)_addEntryWithObject:(id)arg1 key:(id)arg2 ;
-(void)_purgeExtraEntries;
-(NSPointerArray *)pointerArray;
-(void)setPointerArray:(NSPointerArray *)arg1 ;
@end

