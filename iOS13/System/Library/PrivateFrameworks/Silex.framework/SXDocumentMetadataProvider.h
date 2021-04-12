/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDocumentMetadataProviding.h>
#import <libobjc.A.dylib/SXDocumentTitleProviding.h>
#import <libobjc.A.dylib/SXDocumentLanguageProviding.h>
#import <libobjc.A.dylib/SXAutoPlacementProviding.h>

@protocol SXDocumentProviding;
@class SXMetaData, NSString;

@interface SXDocumentMetadataProvider : NSObject <SXDocumentMetadataProviding, SXDocumentTitleProviding, SXDocumentLanguageProviding, SXAutoPlacementProviding> {

	id<SXDocumentProviding> _documentProvider;

}

@property (nonatomic,readonly) id<SXDocumentProviding> documentProvider;              //@synthesize documentProvider=_documentProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXMetaData * metadata; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) id<SXAutoPlacement> autoPlacement; 
-(NSString *)title;
-(SXMetaData *)metadata;
-(NSString *)language;
-(id<SXDocumentProviding>)documentProvider;
-(id)initWithDocumentProvider:(id)arg1 ;
@end

