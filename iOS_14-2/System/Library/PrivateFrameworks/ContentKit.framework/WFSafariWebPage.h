/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFSerializableContent.h>

@class NSURL, NSString, NSData;

@interface WFSafariWebPage : NSObject <NSCopying, WFNaming, WFSerializableContent> {

	NSURL* _URL;
	NSString* _pageTitle;
	NSString* _selectionText;
	NSData* _selectionHTML;
	NSData* _documentHTML;
	NSString* _javaScriptRunnerIdentifier;

}

@property (nonatomic,copy,readonly) NSURL * URL;                                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageTitle;                               //@synthesize pageTitle=_pageTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectionText;                           //@synthesize selectionText=_selectionText - In the implementation block
@property (nonatomic,copy,readonly) NSData * selectionHTML;                             //@synthesize selectionHTML=_selectionHTML - In the implementation block
@property (nonatomic,copy,readonly) NSData * documentHTML;                              //@synthesize documentHTML=_documentHTML - In the implementation block
@property (nonatomic,copy,readonly) NSString * javaScriptRunnerIdentifier;              //@synthesize javaScriptRunnerIdentifier=_javaScriptRunnerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)webPageFromPreprocessingResult:(id)arg1 javaScriptRunnerIdentifier:(id)arg2 ;
-(NSString *)pageTitle;
-(NSString *)wfName;
-(NSURL *)URL;
-(NSString *)selectionText;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)wfSerializedRepresentation;
-(id)initWithURL:(id)arg1 pageTitle:(id)arg2 selectionText:(id)arg3 selectionHTML:(id)arg4 documentHTML:(id)arg5 javaScriptRunnerIdentifier:(id)arg6 ;
-(NSData *)selectionHTML;
-(NSData *)documentHTML;
-(NSString *)javaScriptRunnerIdentifier;
@end

