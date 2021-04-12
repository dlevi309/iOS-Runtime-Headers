/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UITextPasteItem.h>
@class NSItemProvider, NSDictionary;


@protocol UITextPasteItem <NSObject>
@property (nonatomic,readonly) NSItemProvider * itemProvider; 
@property (nonatomic,readonly) id localObject; 
@property (nonatomic,readonly) NSDictionary * defaultAttributes; 
@required
-(id)localObject;
-(NSItemProvider *)itemProvider;
-(void)setNoResult;
-(NSDictionary *)defaultAttributes;
-(void)setAttributedStringResult:(id)arg1;
-(void)setAttachmentResult:(id)arg1;
-(void)setStringResult:(id)arg1;
-(void)setDefaultResult;

@end


@class NSItemProvider, NSDictionary, UITextPasteCoordinator, NSArray, NSString;

@interface UITextPasteItem : NSObject <UITextPasteItem> {

	BOOL _forcesDefaultAttributes;
	NSItemProvider* _itemProvider;
	id _localObject;
	NSDictionary* _defaultAttributes;
	UITextPasteCoordinator* _coordinator;
	NSArray* _supportedPasteConfigurationClasses;
	NSDictionary* _documentOptions;

}

@property (nonatomic,retain) NSItemProvider * itemProvider;                             //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,retain) id localObject;                                            //@synthesize localObject=_localObject - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultAttributes;                          //@synthesize defaultAttributes=_defaultAttributes - In the implementation block
@property (nonatomic,readonly) UITextPasteCoordinator * coordinator;                    //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) NSArray * supportedPasteConfigurationClasses;              //@synthesize supportedPasteConfigurationClasses=_supportedPasteConfigurationClasses - In the implementation block
@property (assign,nonatomic) BOOL forcesDefaultAttributes;                              //@synthesize forcesDefaultAttributes=_forcesDefaultAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * documentOptions;                              //@synthesize documentOptions=_documentOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)localObject;
-(NSItemProvider *)itemProvider;
-(id)initWithTextPasteCoordinator:(id)arg1 ;
-(void)setSupportedPasteConfigurationClasses:(NSArray *)arg1 ;
-(void)setForcesDefaultAttributes:(BOOL)arg1 ;
-(void)setDocumentOptions:(NSDictionary *)arg1 ;
-(BOOL)forcesDefaultAttributes;
-(NSArray *)supportedPasteConfigurationClasses;
-(NSDictionary *)documentOptions;
-(void)setItemProvider:(NSItemProvider *)arg1 ;
-(void)setNoResult;
-(NSDictionary *)defaultAttributes;
-(void)setLocalObject:(id)arg1 ;
-(void)setAttributedStringResult:(id)arg1 ;
-(void)setAttachmentResult:(id)arg1 ;
-(void)setStringResult:(id)arg1 ;
-(void)setDefaultResult;
-(UITextPasteCoordinator *)coordinator;
-(void)setDefaultAttributes:(NSDictionary *)arg1 ;
@end

