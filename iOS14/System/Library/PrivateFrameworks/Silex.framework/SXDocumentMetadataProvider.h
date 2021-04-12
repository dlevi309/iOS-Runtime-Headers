/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDocumentMetadataProviding.h>
#import <libobjc.A.dylib/SXDocumentTitleProviding.h>
#import <libobjc.A.dylib/SXDocumentLanguageProviding.h>
#import <libobjc.A.dylib/SXAutoPlacementProviding.h>

@protocol SXDocumentProviding;
@class SXMetadata, NSString;

@interface SXDocumentMetadataProvider : NSObject <SXDocumentMetadataProviding, SXDocumentTitleProviding, SXDocumentLanguageProviding, SXAutoPlacementProviding> {

	id<SXDocumentProviding> _documentProvider;

}

@property (nonatomic,readonly) id<SXDocumentProviding> documentProvider;              //@synthesize documentProvider=_documentProvider - In the implementation block
@property (nonatomic,readonly) SXMetadata * metadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) id<SXAutoPlacement> autoPlacement; 
-(id<SXDocumentProviding>)documentProvider;
-(id)initWithDocumentProvider:(id)arg1 ;
-(SXMetadata *)metadata;
-(NSString *)language;
-(NSString *)title;
@end

