/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OAXClient.h>

@class PXPresentationState;

@interface PXOfficeArtClient : OAXClient {

	PXPresentationState* mPresentationState;

}

@property (__weak,readonly) PXPresentationState * presentationState; 
+(int)readPlaceholderTypeFromNode:(xmlNode*)arg1 ;
+(int)readPlaceholderBoundsTrackFromNode:(xmlNode*)arg1 ;
-(id)initWithState:(id)arg1 ;
-(PXPresentationState *)presentationState;
-(void)readClientDataFromShapeNode:(xmlNode*)arg1 toShape:(id)arg2 state:(id)arg3 ;
-(void)readClientDataFromPictureNode:(xmlNode*)arg1 toImage:(id)arg2 state:(id)arg3 ;
-(void)postprocessHyperlink:(id)arg1 relationship:(id)arg2 state:(id)arg3 ;
-(BOOL)chartAutoFillIsHollow;
-(BOOL)chartAutoStrokeIsHollow;
-(void)readBlipExtWithURI:(id)arg1 fromNode:(xmlNode*)arg2 toDrawable:(id)arg3 state:(id)arg4 ;
-(id)readOle:(xmlNode*)arg1 state:(id)arg2 ;
-(void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
-(id)readClientTextField:(xmlNode*)arg1 identity:(id)arg2 paragraph:(id)arg3 state:(id)arg4 ;
@end

