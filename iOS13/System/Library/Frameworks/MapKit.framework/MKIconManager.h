/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@interface MKIconManager : NSObject
+(id)iconManager;
+(id)_imageForFeatureStyleAttributes:(id)arg1 iconText:(id)arg2 size:(unsigned long long)arg3 forScale:(double)arg4 navMode:(BOOL)arg5 nightMode:(BOOL)arg6 ;
+(id)_imageForFeatureStyleAttributes:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 navMode:(BOOL)arg4 ;
+(id)_imageForFeatureStyleAttributes:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 navMode:(BOOL)arg4 nightMode:(BOOL)arg5 ;
+(id)imageForTrafficCamera:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 nightMode:(BOOL)arg4 ;
+(id)imageForTrafficIncidentType:(long long)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 nightMode:(BOOL)arg4 ;
+(id)_imageForFeatureStyleAttributes:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 nightMode:(BOOL)arg4 ;
+(id)imageForMapItem:(id)arg1 forScale:(double)arg2 fallbackToBundleIcon:(BOOL)arg3 ;
+(id)imageForMapItem:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 fallbackToBundleIcon:(BOOL)arg5 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 nightMode:(BOOL)arg8 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(BOOL)arg5 transitMode:(BOOL)arg6 isCarplay:(BOOL)arg7 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(BOOL)arg5 transitMode:(BOOL)arg6 isCarplay:(BOOL)arg7 nightMode:(BOOL)arg8 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 transitmode:(BOOL)arg8 interactive:(BOOL)arg9 isCarplay:(BOOL)arg10 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 transitmode:(BOOL)arg8 interactive:(BOOL)arg9 isCarplay:(BOOL)arg10 nightMode:(BOOL)arg11 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 transitmode:(BOOL)arg8 interactive:(BOOL)arg9 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 transitmode:(BOOL)arg8 interactive:(BOOL)arg9 nightMode:(BOOL)arg10 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 nightMode:(BOOL)arg7 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 transitmode:(BOOL)arg8 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 transitmode:(BOOL)arg8 nightMode:(BOOL)arg9 ;
+(void)setDiskCacheURL:(id)arg1 ;
+(CGColorRef)newFillColorForStyleAttributes:(id)arg1 forScale:(double)arg2 ;
+(CGColorRef)newHaloColorForStyleAttributes:(id)arg1 forScale:(double)arg2 ;
+(CGColorRef)newGlyphColorForStyleAttributes:(id)arg1 forScale:(double)arg2 ;
+(id)_imageForFeatureStyleAttributes:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 ;
+(id)imageForTrafficCamera:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 ;
+(id)imageForTrafficIncidentType:(long long)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 ;
+(id)imageForMapItem:(id)arg1 forScale:(double)arg2 ;
+(id)imageForMapItem:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 nightMode:(BOOL)arg5 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(BOOL)arg5 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(BOOL)arg5 nightMode:(BOOL)arg6 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(BOOL)arg5 transitMode:(BOOL)arg6 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(BOOL)arg5 transitMode:(BOOL)arg6 nightMode:(BOOL)arg7 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(BOOL)arg5 transitMode:(BOOL)arg6 interactive:(BOOL)arg7 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(BOOL)arg5 transitMode:(BOOL)arg6 interactive:(BOOL)arg7 nightMode:(BOOL)arg8 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 nightMode:(BOOL)arg6 ;
+(void)requestImageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

