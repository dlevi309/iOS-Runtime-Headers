/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@class NSMutableArray;

@interface _VNWeakSessionsCollection : NSObject {

	NSMutableArray* _weakSessionWrappers;

}
-(id)init;
-(void)_enumerateSessionsDroppingWeakZeroedObjects:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addSession:(id)arg1 droppingWeakZeroedObjects:(BOOL)arg2 ;
-(id)allSessionsDroppingWeakZeroedObjects:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

