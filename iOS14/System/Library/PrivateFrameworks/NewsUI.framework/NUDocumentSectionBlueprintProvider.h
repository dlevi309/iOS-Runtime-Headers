/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUDocumentSectionBlueprintProvider.h>

@protocol NUDocumentSectionBlueprintProvider <NSObject>
@required
-(id)observableHeaderBlueprint;
-(id)observableFooterBlueprint;
-(id)observableContentOverlayBlueprintData;

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
-(id)observableFooterBlueprint;
-(id)observableContentOverlayBlueprintData;
-(FCObservable *)tempObservableHeaderBlueprint;
-(FCObservable *)tempObservableFooterBlueprint;
-(FCObservable *)tempObservableContentOverlayBlueprintData;
@end

