/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFSerializableContent.h>

@class NSURL, NSString, NSData, NSItemProvider;

@interface WFSafariWebPage : NSObject <NSCopying, WFNaming, WFSerializableContent> {

	NSURL* _URL;
	NSString* _pageTitle;
	NSString* _selectionText;
	NSData* _selectionHTML;
	NSData* _documentHTML;
	NSItemProvider* _itemProvider;

}

@property (nonatomic,copy,readonly) NSURL * URL;                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageTitle;                  //@synthesize pageTitle=_pageTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectionText;              //@synthesize selectionText=_selectionText - In the implementation block
@property (nonatomic,copy,readonly) NSData * selectionHTML;                //@synthesize selectionHTML=_selectionHTML - In the implementation block
@property (nonatomic,copy,readonly) NSData * documentHTML;                 //@synthesize documentHTML=_documentHTML - In the implementation block
@property (nonatomic,retain) NSItemProvider * itemProvider;                //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(void)retrieveWebPageFromItemProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)webPageFromItemDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSItemProvider *)itemProvider;
-(NSURL *)URL;
-(void)setItemProvider:(NSItemProvider *)arg1 ;
-(NSString *)pageTitle;
-(NSString *)selectionText;
-(NSString *)wfName;
-(id)wfSerializedRepresentation;
-(id)initWithURL:(id)arg1 pageTitle:(id)arg2 selectionText:(id)arg3 selectionHTML:(id)arg4 documentHTML:(id)arg5 ;
-(NSData *)selectionHTML;
-(NSData *)documentHTML;
@end

