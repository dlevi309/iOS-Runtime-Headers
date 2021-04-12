/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDOMModificationContextFactory.h>

@protocol SXDOMModificationContextFactory <NSObject>
@required
-(id)createModificationContextWithLayoutOptions:(id)arg1;

@end


@protocol SXDocumentProviding;
@class NSString;

@interface SXDOMModificationContextFactory : NSObject <SXDOMModificationContextFactory> {

	id<SXDocumentProviding> _documentProvider;

}

@property (nonatomic,readonly) id<SXDocumentProviding> documentProvider;              //@synthesize documentProvider=_documentProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDocumentProviding>)documentProvider;
-(id)createModificationContextWithLayoutOptions:(id)arg1 ;
-(id)initWithDocumentProvider:(id)arg1 ;
@end

