/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OABReaderClient.h>

@interface PBOfficeArtReaderClient : NSObject <OABReaderClient>
+(int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(id)arg2 ;
+(BOOL)tablesAreAllowed;
+(id)readDrawableFromPackagePart:(id)arg1 foundInObject:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3 ;
+(BOOL)xmlEquivalentOfDrawableCanBeUsed;
+(void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3 ;
+(BOOL)escherIsFullySupported;
+(id)readClientTextBoxFromShape:(id)arg1 toTextBody:(id)arg2 state:(id)arg3 ;
+(void)readClientAnchorFromContainer:(id)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
+(BOOL)readPlaceholderInfo:(id)arg1 clientData:(id)arg2 toGraphic:(id)arg3 presentationState:(id)arg4 ;
+(BOOL)readClientTextBoxFromShape:(id)arg1 toGraphic:(id)arg2 clientData:(id)arg3 state:(id)arg4 ;
+(void)readHyperlinkFromShapeContainerHolder:(id)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
+(BOOL)readRecolorInfoFromClientDataHolder:(id)arg1 toClientData:(id)arg2 state:(id)arg3 ;
+(BOOL)readOleFromClientDataHolder:(id)arg1 toGraphic:(id)arg2 tgtClientData:(id)arg3 state:(id)arg4 ;
+(void)addRecolorSpec:(const PptRecolorSpec*)arg1 toDictionary:(id)arg2 state:(id)arg3 ;
+(id)newTargetFromDrawable:(id)arg1 clientData:(id)arg2 buildType:(int)arg3 ;
+(int)presetIdFromFlyMethod:(int)arg1 isEntrance:(BOOL)arg2 ;
+(int)directionFromFlyDirection:(int)arg1 ;
+(id)newBuildFromBuildType:(int)arg1 ;
@end

