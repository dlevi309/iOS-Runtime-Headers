/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, OADBlip;

@interface OADBlipRef : NSObject <NSCopying> {

	int mIndex;
	NSString* mName;
	NSMutableArray* mEffects;
	OADBlip* mBlip;

}
+(id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 ;
+(int)blipTypeForContentType:(id)arg1 ;
+(int)blipTypeForExtension:(id)arg1 ;
+(int)blipTypeForImageData:(id)arg1 ;
+(id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4 ;
+(id)inflatedExtensionForGzippedExtension:(id)arg1 ;
-(int)index;
-(id)init;
-(id)blip;
-(void)setIndex:(int)arg1 ;
-(id)name;
-(id)description;
-(unsigned long long)effectCount;
-(unsigned long long)hash;
-(void)setName:(id)arg1 ;
-(BOOL)isNull;
-(id)effects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addEffect:(id)arg1 ;
-(void)setEffects:(id)arg1 ;
-(id)effectAtIndex:(unsigned long long)arg1 ;
-(id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 ;
-(id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4 ;
-(void)setBlip:(id)arg1 ;
-(void)removeEffectAtIndex:(unsigned long long)arg1 ;
@end

