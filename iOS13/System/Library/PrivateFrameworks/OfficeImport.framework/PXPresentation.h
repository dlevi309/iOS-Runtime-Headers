/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PXPresentation : NSObject
+(CGSize)readSizeFromChildOfElement:(xmlNode*)arg1 childName:(const char*)arg2 state:(id)arg3 ;
+(void)readPresentationProperties:(id)arg1 to:(id)arg2 state:(id)arg3 ;
+(void)readSlideIndicesWithPresentationPart:(id)arg1 presentationState:(id)arg2 ;
+(id)readFromPackage:(id)arg1 fileName:(id)arg2 reader:(id)arg3 cancel:(id)arg4 isThumbnail:(BOOL)arg5 delegate:(id)arg6 ;
@end

