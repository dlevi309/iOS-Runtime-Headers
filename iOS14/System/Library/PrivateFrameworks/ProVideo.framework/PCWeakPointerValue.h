/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PCWeakPointerValue : NSObject <NSCopying> {

	id _pointerValue;
	id _zeroingWeakValue;
	BOOL _hasZeroingWeakReference;

}

@property (nonatomic,readonly) id nonretainedObjectValue; 
@property (nonatomic,readonly) void* pointerValue;                     //@synthesize pointerValue=_pointerValue - In the implementation block
+(id)valueWithNonretainedObject:(id)arg1 ;
+(id)valueWithPointer:(void*)arg1 ;
+(id)weakPointerValueArrayFromArray:(id)arg1 ;
+(id)arrayFromWeakPointerValueArray:(id)arg1 ;
+(id)weakPointerValueSetFromSet:(id)arg1 ;
+(id)setFromWeakPointerValueSet:(id)arg1 ;
-(void*)pointerValue;
-(id)nonretainedObjectValue;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithNonretainedObject:(id)arg1 ;
-(id)initWithPointer:(void*)arg1 ;
@end

