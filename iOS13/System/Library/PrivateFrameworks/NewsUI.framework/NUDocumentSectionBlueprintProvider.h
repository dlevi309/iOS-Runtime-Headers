/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUDocumentSectionBlueprintProvider.h>

@protocol NUDocumentSectionBlueprintProvider <NSObject>
@required
-(id)observableHeaderBlueprint;
-(id)observableContentOverlayBlueprintData;
-(id)observableFooterBlueprint;

@end


@class FCObservable, NSString;

@interface NUDocumentSectionBlueprintProvider : NSObject <NUDocumentSectionBlueprintProvider> {

	FCObservable* _tempObservableHeaderBlueprint;
	FCObservable* _tempObservableFooterBlueprint;
	FCObservable* _tempObservableContentOverlayBlueprintData;

}

@property (nonatomic,readonly) FCObservable * tempObservableHeaderBlueprint;                          //@synthesize tempObservableHeaderBlueprint=_tempObservableHeaderBlueprint - In the implementation block
@property (nonatomic,readonly) FCObservable * tempObservableFooterBlueprint;                          //@synthesize tempObservableFooterBlueprint=_tempObservableFooterBlueprint - In the implementation block
@property (nonatomic,readonly) FCObservable * tempObservableContentOverlayBlueprintData;              //@synthesize tempObservableContentOverlayBlueprintData=_tempObservableContentOverlayBlueprintData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)observableHeaderBlueprint;
-(id)observableContentOverlayBlueprintData;
-(id)observableFooterBlueprint;
-(FCObservable *)tempObservableHeaderBlueprint;
-(FCObservable *)tempObservableFooterBlueprint;
-(FCObservable *)tempObservableContentOverlayBlueprintData;
@end

