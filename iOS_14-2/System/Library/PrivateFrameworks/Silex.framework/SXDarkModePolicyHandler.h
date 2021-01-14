/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDarkModePolicyHandler.h>

@protocol SXDarkModePolicyHandler <NSObject>
@required
-(BOOL)shouldApplyDarkModeToBackgroundColorsOfComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
-(BOOL)shouldApplyDarkModeToForegroundColorsOfComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
-(BOOL)shouldApplyDarkModeToComponentStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
-(BOOL)shouldApplyDarkModeToComponent:(id)arg1 DOM:(id)arg2;
-(BOOL)shouldApplyDarkModeToComponentStylesForComponent:(id)arg1 DOM:(id)arg2;
-(BOOL)shouldApplyDarkModeToDOM:(id)arg1 layoutOptions:(id)arg2;
-(BOOL)shouldApplyDarkModeToForegroundColorsOfTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
-(BOOL)shouldApplyDarkModeToBackgroundColorsOfTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
-(BOOL)shouldApplyDarkModeToTextStyleForegroundColorsForComponent:(id)arg1 DOM:(id)arg2;
-(BOOL)shouldApplyDarkModeToDocumentStyle:(id)arg1 DOM:(id)arg2;
-(BOOL)shouldApplyDarkModeToTextStyleBackgroundColorsForComponent:(id)arg1 DOM:(id)arg2;

@end


@protocol SXDarkModeConfiguration, SXDocumentProviding;
@class NSMutableArray, NSString;

@interface SXDarkModePolicyHandler : NSObject <SXDarkModePolicyHandler> {

	id<SXDarkModeConfiguration> _darkModeConfiguration;
	id<SXDocumentProviding> _documentProvider;
	NSMutableArray* _exceptions;

}

@property (nonatomic,readonly) id<SXDarkModeConfiguration> darkModeConfiguration;              //@synthesize darkModeConfiguration=_darkModeConfiguration - In the implementation block
@property (nonatomic,readonly) id<SXDocumentProviding> documentProvider;                       //@synthesize documentProvider=_documentProvider - In the implementation block
@property (nonatomic,readonly) NSMutableArray * exceptions;                                    //@synthesize exceptions=_exceptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDocumentProviding>)documentProvider;
-(BOOL)shouldApplyDarkModeToBackgroundColorsOfComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 ;
-(BOOL)shouldApplyDarkModeToForegroundColorsOfComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 ;
-(BOOL)shouldApplyDarkModeToComponentStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 ;
-(BOOL)shouldApplyDarkModeToComponent:(id)arg1 DOM:(id)arg2 ;
-(BOOL)shouldApplyDarkModeToComponentStylesForComponent:(id)arg1 DOM:(id)arg2 ;
-(id<SXDarkModeConfiguration>)darkModeConfiguration;
-(BOOL)shouldApplyDarkModeToDOM:(id)arg1 layoutOptions:(id)arg2 ;
-(void)addPolicyException:(id)arg1 ;
-(BOOL)shouldApplyDarkModeToForegroundColorsOfTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 ;
-(BOOL)shouldApplyDarkModeToBackgroundColorsOfTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 ;
-(BOOL)shouldApplyDarkModeToTextStyleForegroundColorsForComponent:(id)arg1 DOM:(id)arg2 ;
-(id)initWithDocumentProvider:(id)arg1 darkModeConfiguration:(id)arg2 ;
-(NSMutableArray *)exceptions;
-(BOOL)shouldApplyDarkModeToDocumentStyle:(id)arg1 DOM:(id)arg2 ;
-(BOOL)shouldApplyDarkModeToTextStyleBackgroundColorsForComponent:(id)arg1 DOM:(id)arg2 ;
@end

