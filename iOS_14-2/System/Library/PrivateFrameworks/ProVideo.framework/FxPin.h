/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxPin : NSObject {

	FxPinPriv* _priv;

}
-(int)direction;
-(id)stream;
-(int)index;
-(Class)valueClass;
-(id)properties;
-(id)uuid;
-(id)init;
-(void)setDirection:(int)arg1 ;
-(id)description;
-(void)setDisplayName:(id)arg1 ;
-(void)setValueClass:(Class)arg1 ;
-(void)setDescription:(id)arg1 ;
-(void)setUUID:(id)arg1 ;
-(id)displayName;
-(void)dealloc;
-(id)parentPlug;
-(void)setParentPlug:(id)arg1 ;
@end

